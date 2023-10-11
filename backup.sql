--
-- PostgreSQL database dump
--

-- Dumped from database version 13.2
-- Dumped by pg_dump version 13.2

-- Started on 2021-04-01 17:45:34

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

SET default_tablespace = '';

SET default_table_access_method = heap;

--
-- TOC entry 201 (class 1259 OID 24788)
-- Name: t_activity; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_activity (
    activity_id bigint NOT NULL,
    name text,
    description text
);


ALTER TABLE public.t_activity OWNER TO postgres;

--
-- TOC entry 200 (class 1259 OID 24786)
-- Name: t_activity_activity_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_activity_activity_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_activity_activity_id_seq OWNER TO postgres;

--
-- TOC entry 3309 (class 0 OID 0)
-- Dependencies: 200
-- Name: t_activity_activity_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_activity_activity_id_seq OWNED BY public.t_activity.activity_id;


--
-- TOC entry 203 (class 1259 OID 24799)
-- Name: t_collaboration; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_collaboration (
    collaboration_id bigint NOT NULL,
    name text,
    description text
);


ALTER TABLE public.t_collaboration OWNER TO postgres;

--
-- TOC entry 202 (class 1259 OID 24797)
-- Name: t_collaboration_collaboration_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_collaboration_collaboration_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_collaboration_collaboration_id_seq OWNER TO postgres;

--
-- TOC entry 3310 (class 0 OID 0)
-- Dependencies: 202
-- Name: t_collaboration_collaboration_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_collaboration_collaboration_id_seq OWNED BY public.t_collaboration.collaboration_id;


--
-- TOC entry 237 (class 1259 OID 33001)
-- Name: t_contact_employer; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_contact_employer (
    contact_employer_id bigint NOT NULL,
    employer_id integer,
    person_id integer
);


ALTER TABLE public.t_contact_employer OWNER TO postgres;

--
-- TOC entry 236 (class 1259 OID 32999)
-- Name: t_contact_employer_contact_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_contact_employer_contact_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_contact_employer_contact_employer_id_seq OWNER TO postgres;

--
-- TOC entry 3311 (class 0 OID 0)
-- Dependencies: 236
-- Name: t_contact_employer_contact_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_contact_employer_contact_employer_id_seq OWNED BY public.t_contact_employer.contact_employer_id;


--
-- TOC entry 233 (class 1259 OID 32957)
-- Name: t_department; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_department (
    department_id bigint NOT NULL,
    name text
);


ALTER TABLE public.t_department OWNER TO postgres;

--
-- TOC entry 232 (class 1259 OID 32955)
-- Name: t_department_department_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_department_department_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_department_department_id_seq OWNER TO postgres;

--
-- TOC entry 3312 (class 0 OID 0)
-- Dependencies: 232
-- Name: t_department_department_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_department_department_id_seq OWNED BY public.t_department.department_id;


--
-- TOC entry 247 (class 1259 OID 33099)
-- Name: t_discipline; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_discipline (
    discipline_id bigint NOT NULL,
    semester integer,
    name text,
    description text,
    educational_program_id integer
);


ALTER TABLE public.t_discipline OWNER TO postgres;

--
-- TOC entry 246 (class 1259 OID 33097)
-- Name: t_discipline_discipline_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_discipline_discipline_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_discipline_discipline_id_seq OWNER TO postgres;

--
-- TOC entry 3313 (class 0 OID 0)
-- Dependencies: 246
-- Name: t_discipline_discipline_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_discipline_discipline_id_seq OWNED BY public.t_discipline.discipline_id;


--
-- TOC entry 245 (class 1259 OID 33088)
-- Name: t_educational_program; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_educational_program (
    educational_program_id bigint NOT NULL,
    name text,
    description text,
    field text,
    focus text
);


ALTER TABLE public.t_educational_program OWNER TO postgres;

--
-- TOC entry 244 (class 1259 OID 33086)
-- Name: t_educational_program_educational_program_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_educational_program_educational_program_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_educational_program_educational_program_id_seq OWNER TO postgres;

--
-- TOC entry 3314 (class 0 OID 0)
-- Dependencies: 244
-- Name: t_educational_program_educational_program_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_educational_program_educational_program_id_seq OWNED BY public.t_educational_program.educational_program_id;


--
-- TOC entry 205 (class 1259 OID 24810)
-- Name: t_employer; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_employer (
    employer_id bigint NOT NULL,
    name text
);


ALTER TABLE public.t_employer OWNER TO postgres;

--
-- TOC entry 204 (class 1259 OID 24808)
-- Name: t_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_employer_employer_id_seq OWNER TO postgres;

--
-- TOC entry 3315 (class 0 OID 0)
-- Dependencies: 204
-- Name: t_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_employer_employer_id_seq OWNED BY public.t_employer.employer_id;


--
-- TOC entry 221 (class 1259 OID 24877)
-- Name: t_event; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_event (
    event_id bigint NOT NULL,
    name text,
    description text,
    begin date,
    ending date,
    employer integer
);


ALTER TABLE public.t_event OWNER TO postgres;

--
-- TOC entry 220 (class 1259 OID 24875)
-- Name: t_events_events_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_events_events_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_events_events_id_seq OWNER TO postgres;

--
-- TOC entry 3316 (class 0 OID 0)
-- Dependencies: 220
-- Name: t_events_events_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_events_events_id_seq OWNED BY public.t_event.event_id;


--
-- TOC entry 225 (class 1259 OID 24936)
-- Name: t_group; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_group (
    group_id bigint NOT NULL,
    number text
);


ALTER TABLE public.t_group OWNER TO postgres;

--
-- TOC entry 224 (class 1259 OID 24934)
-- Name: t_groups_groups_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_groups_groups_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_groups_groups_id_seq OWNER TO postgres;

--
-- TOC entry 3317 (class 0 OID 0)
-- Dependencies: 224
-- Name: t_groups_groups_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_groups_groups_id_seq OWNED BY public.t_group.group_id;


--
-- TOC entry 229 (class 1259 OID 24966)
-- Name: t_head_employer; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_head_employer (
    head_employer_id bigint NOT NULL,
    employer integer,
    person_id integer
);


ALTER TABLE public.t_head_employer OWNER TO postgres;

--
-- TOC entry 228 (class 1259 OID 24964)
-- Name: t_head_employer_head_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_head_employer_head_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_head_employer_head_employer_id_seq OWNER TO postgres;

--
-- TOC entry 3318 (class 0 OID 0)
-- Dependencies: 228
-- Name: t_head_employer_head_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_head_employer_head_employer_id_seq OWNED BY public.t_head_employer.head_employer_id;


--
-- TOC entry 235 (class 1259 OID 32968)
-- Name: t_head_university; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_head_university (
    head_university_id bigint NOT NULL,
    department_id integer,
    person_id integer
);


ALTER TABLE public.t_head_university OWNER TO postgres;

--
-- TOC entry 234 (class 1259 OID 32966)
-- Name: t_head_university_head_university_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_head_university_head_university_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_head_university_head_university_id_seq OWNER TO postgres;

--
-- TOC entry 3319 (class 0 OID 0)
-- Dependencies: 234
-- Name: t_head_university_head_university_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_head_university_head_university_id_seq OWNED BY public.t_head_university.head_university_id;


--
-- TOC entry 239 (class 1259 OID 33047)
-- Name: t_passing_practice; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_passing_practice (
    passing_practice_id bigint NOT NULL,
    beginning date,
    ending date,
    practice_id integer,
    head_employer_id integer,
    head_university_id integer,
    employer_id integer,
    student_id integer,
    task_id integer,
    report_id integer
);


ALTER TABLE public.t_passing_practice OWNER TO postgres;

--
-- TOC entry 238 (class 1259 OID 33045)
-- Name: t_passing_practice_passing_practice_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_passing_practice_passing_practice_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_passing_practice_passing_practice_id_seq OWNER TO postgres;

--
-- TOC entry 3320 (class 0 OID 0)
-- Dependencies: 238
-- Name: t_passing_practice_passing_practice_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_passing_practice_passing_practice_id_seq OWNED BY public.t_passing_practice.passing_practice_id;


--
-- TOC entry 227 (class 1259 OID 24947)
-- Name: t_person; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_person (
    person_id bigint NOT NULL,
    fistname text,
    lastname text,
    patronymic text,
    phone_number text,
    email text
);


ALTER TABLE public.t_person OWNER TO postgres;

--
-- TOC entry 226 (class 1259 OID 24945)
-- Name: t_person_person_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_person_person_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_person_person_id_seq OWNER TO postgres;

--
-- TOC entry 3321 (class 0 OID 0)
-- Dependencies: 226
-- Name: t_person_person_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_person_person_id_seq OWNED BY public.t_person.person_id;


--
-- TOC entry 223 (class 1259 OID 24896)
-- Name: t_practice; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_practice (
    practice_id bigint NOT NULL,
    education_program_id integer
);


ALTER TABLE public.t_practice OWNER TO postgres;

--
-- TOC entry 222 (class 1259 OID 24894)
-- Name: t_practice_practice_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_practice_practice_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_practice_practice_id_seq OWNER TO postgres;

--
-- TOC entry 3322 (class 0 OID 0)
-- Dependencies: 222
-- Name: t_practice_practice_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_practice_practice_id_seq OWNED BY public.t_practice.practice_id;


--
-- TOC entry 243 (class 1259 OID 33077)
-- Name: t_practice_result; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_practice_result (
    practice_result_id bigint NOT NULL,
    estimate_employer text,
    estimate_university text,
    student_id integer
);


ALTER TABLE public.t_practice_result OWNER TO postgres;

--
-- TOC entry 242 (class 1259 OID 33075)
-- Name: t_practice_result_practice_result_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_practice_result_practice_result_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_practice_result_practice_result_id_seq OWNER TO postgres;

--
-- TOC entry 3323 (class 0 OID 0)
-- Dependencies: 242
-- Name: t_practice_result_practice_result_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_practice_result_practice_result_id_seq OWNED BY public.t_practice_result.practice_result_id;


--
-- TOC entry 210 (class 1259 OID 24842)
-- Name: t_qxee_activity_employer; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_qxee_activity_employer (
    activity_id bigint NOT NULL,
    employer_id bigint NOT NULL
);


ALTER TABLE public.t_qxee_activity_employer OWNER TO postgres;

--
-- TOC entry 208 (class 1259 OID 24838)
-- Name: t_qxee_activity_employer_activity_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_activity_employer_activity_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_activity_employer_activity_id_seq OWNER TO postgres;

--
-- TOC entry 3324 (class 0 OID 0)
-- Dependencies: 208
-- Name: t_qxee_activity_employer_activity_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_activity_employer_activity_id_seq OWNED BY public.t_qxee_activity_employer.activity_id;


--
-- TOC entry 209 (class 1259 OID 24840)
-- Name: t_qxee_activity_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_activity_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_activity_employer_employer_id_seq OWNER TO postgres;

--
-- TOC entry 3325 (class 0 OID 0)
-- Dependencies: 209
-- Name: t_qxee_activity_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_activity_employer_employer_id_seq OWNED BY public.t_qxee_activity_employer.employer_id;


--
-- TOC entry 213 (class 1259 OID 24851)
-- Name: t_qxee_collaboration_employer; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_qxee_collaboration_employer (
    collaboration_id bigint NOT NULL,
    employer_id bigint NOT NULL
);


ALTER TABLE public.t_qxee_collaboration_employer OWNER TO postgres;

--
-- TOC entry 211 (class 1259 OID 24847)
-- Name: t_qxee_collaboration_employer_collaboration_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_collaboration_employer_collaboration_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_collaboration_employer_collaboration_id_seq OWNER TO postgres;

--
-- TOC entry 3326 (class 0 OID 0)
-- Dependencies: 211
-- Name: t_qxee_collaboration_employer_collaboration_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_collaboration_employer_collaboration_id_seq OWNED BY public.t_qxee_collaboration_employer.collaboration_id;


--
-- TOC entry 212 (class 1259 OID 24849)
-- Name: t_qxee_collaboration_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_collaboration_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_collaboration_employer_employer_id_seq OWNER TO postgres;

--
-- TOC entry 3327 (class 0 OID 0)
-- Dependencies: 212
-- Name: t_qxee_collaboration_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_collaboration_employer_employer_id_seq OWNED BY public.t_qxee_collaboration_employer.employer_id;


--
-- TOC entry 252 (class 1259 OID 33123)
-- Name: t_qxee_employer_result_education; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_qxee_employer_result_education (
    result_discipline_id bigint NOT NULL,
    employer_id bigint NOT NULL
);


ALTER TABLE public.t_qxee_employer_result_education OWNER TO postgres;

--
-- TOC entry 251 (class 1259 OID 33121)
-- Name: t_qxee_employer_result_education_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_employer_result_education_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_employer_result_education_employer_id_seq OWNER TO postgres;

--
-- TOC entry 3328 (class 0 OID 0)
-- Dependencies: 251
-- Name: t_qxee_employer_result_education_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_employer_result_education_employer_id_seq OWNED BY public.t_qxee_employer_result_education.employer_id;


--
-- TOC entry 250 (class 1259 OID 33119)
-- Name: t_qxee_employer_result_education_result_discipline_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_employer_result_education_result_discipline_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_employer_result_education_result_discipline_id_seq OWNER TO postgres;

--
-- TOC entry 3329 (class 0 OID 0)
-- Dependencies: 250
-- Name: t_qxee_employer_result_education_result_discipline_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_employer_result_education_result_discipline_id_seq OWNED BY public.t_qxee_employer_result_education.result_discipline_id;


--
-- TOC entry 219 (class 1259 OID 24869)
-- Name: t_qxee_practice_employer; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_qxee_practice_employer (
    employer_id bigint NOT NULL,
    practice_id bigint NOT NULL
);


ALTER TABLE public.t_qxee_practice_employer OWNER TO postgres;

--
-- TOC entry 217 (class 1259 OID 24865)
-- Name: t_qxee_practice_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_practice_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_practice_employer_employer_id_seq OWNER TO postgres;

--
-- TOC entry 3330 (class 0 OID 0)
-- Dependencies: 217
-- Name: t_qxee_practice_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_practice_employer_employer_id_seq OWNED BY public.t_qxee_practice_employer.employer_id;


--
-- TOC entry 218 (class 1259 OID 24867)
-- Name: t_qxee_practice_employer_practice_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_practice_employer_practice_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_practice_employer_practice_id_seq OWNER TO postgres;

--
-- TOC entry 3331 (class 0 OID 0)
-- Dependencies: 218
-- Name: t_qxee_practice_employer_practice_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_practice_employer_practice_id_seq OWNED BY public.t_qxee_practice_employer.practice_id;


--
-- TOC entry 216 (class 1259 OID 24860)
-- Name: t_qxee_task_employer; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_qxee_task_employer (
    employer_id bigint NOT NULL,
    task_id bigint NOT NULL
);


ALTER TABLE public.t_qxee_task_employer OWNER TO postgres;

--
-- TOC entry 214 (class 1259 OID 24856)
-- Name: t_qxee_task_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_task_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_task_employer_employer_id_seq OWNER TO postgres;

--
-- TOC entry 3332 (class 0 OID 0)
-- Dependencies: 214
-- Name: t_qxee_task_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_task_employer_employer_id_seq OWNED BY public.t_qxee_task_employer.employer_id;


--
-- TOC entry 215 (class 1259 OID 24858)
-- Name: t_qxee_task_employer_task_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_qxee_task_employer_task_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_qxee_task_employer_task_id_seq OWNER TO postgres;

--
-- TOC entry 3333 (class 0 OID 0)
-- Dependencies: 215
-- Name: t_qxee_task_employer_task_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_qxee_task_employer_task_id_seq OWNED BY public.t_qxee_task_employer.task_id;


--
-- TOC entry 254 (class 1259 OID 33130)
-- Name: t_report; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_report (
    report_id bigint NOT NULL,
    report bytea,
    feedback_university text,
    feedback_employer text,
    practice_result integer,
    head_university_id integer,
    head_employer_id integer,
    student_id integer
);


ALTER TABLE public.t_report OWNER TO postgres;

--
-- TOC entry 253 (class 1259 OID 33128)
-- Name: t_report_report_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_report_report_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_report_report_id_seq OWNER TO postgres;

--
-- TOC entry 3334 (class 0 OID 0)
-- Dependencies: 253
-- Name: t_report_report_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_report_report_id_seq OWNED BY public.t_report.report_id;


--
-- TOC entry 249 (class 1259 OID 33110)
-- Name: t_result_discipline; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_result_discipline (
    result_discipline_id bigint NOT NULL,
    description text,
    acquired_skills text,
    educational_program_id integer,
    discipline_id integer
);


ALTER TABLE public.t_result_discipline OWNER TO postgres;

--
-- TOC entry 248 (class 1259 OID 33108)
-- Name: t_result_discipline_result_discipline_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_result_discipline_result_discipline_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_result_discipline_result_discipline_id_seq OWNER TO postgres;

--
-- TOC entry 3335 (class 0 OID 0)
-- Dependencies: 248
-- Name: t_result_discipline_result_discipline_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_result_discipline_result_discipline_id_seq OWNED BY public.t_result_discipline.result_discipline_id;


--
-- TOC entry 231 (class 1259 OID 32949)
-- Name: t_student; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_student (
    strudent_id bigint NOT NULL,
    group_id integer,
    education_program_id integer,
    person_id integer
);


ALTER TABLE public.t_student OWNER TO postgres;

--
-- TOC entry 230 (class 1259 OID 32947)
-- Name: t_student_strudent_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_student_strudent_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_student_strudent_id_seq OWNER TO postgres;

--
-- TOC entry 3336 (class 0 OID 0)
-- Dependencies: 230
-- Name: t_student_strudent_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_student_strudent_id_seq OWNED BY public.t_student.strudent_id;


--
-- TOC entry 207 (class 1259 OID 24821)
-- Name: t_task; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_task (
    task_id bigint NOT NULL,
    name text,
    description text
);


ALTER TABLE public.t_task OWNER TO postgres;

--
-- TOC entry 241 (class 1259 OID 33055)
-- Name: t_task_practice; Type: TABLE; Schema: public; Owner: postgres
--

CREATE TABLE public.t_task_practice (
    task_id bigint NOT NULL,
    name text,
    description text
);


ALTER TABLE public.t_task_practice OWNER TO postgres;

--
-- TOC entry 240 (class 1259 OID 33053)
-- Name: t_task_practice_task_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_task_practice_task_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_task_practice_task_id_seq OWNER TO postgres;

--
-- TOC entry 3337 (class 0 OID 0)
-- Dependencies: 240
-- Name: t_task_practice_task_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_task_practice_task_id_seq OWNED BY public.t_task_practice.task_id;


--
-- TOC entry 206 (class 1259 OID 24819)
-- Name: t_task_task_id_seq; Type: SEQUENCE; Schema: public; Owner: postgres
--

CREATE SEQUENCE public.t_task_task_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.t_task_task_id_seq OWNER TO postgres;

--
-- TOC entry 3338 (class 0 OID 0)
-- Dependencies: 206
-- Name: t_task_task_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: postgres
--

ALTER SEQUENCE public.t_task_task_id_seq OWNED BY public.t_task.task_id;


--
-- TOC entry 3018 (class 2604 OID 24791)
-- Name: t_activity activity_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_activity ALTER COLUMN activity_id SET DEFAULT nextval('public.t_activity_activity_id_seq'::regclass);


--
-- TOC entry 3019 (class 2604 OID 24802)
-- Name: t_collaboration collaboration_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_collaboration ALTER COLUMN collaboration_id SET DEFAULT nextval('public.t_collaboration_collaboration_id_seq'::regclass);


--
-- TOC entry 3038 (class 2604 OID 33004)
-- Name: t_contact_employer contact_employer_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_contact_employer ALTER COLUMN contact_employer_id SET DEFAULT nextval('public.t_contact_employer_contact_employer_id_seq'::regclass);


--
-- TOC entry 3036 (class 2604 OID 32960)
-- Name: t_department department_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_department ALTER COLUMN department_id SET DEFAULT nextval('public.t_department_department_id_seq'::regclass);


--
-- TOC entry 3043 (class 2604 OID 33102)
-- Name: t_discipline discipline_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_discipline ALTER COLUMN discipline_id SET DEFAULT nextval('public.t_discipline_discipline_id_seq'::regclass);


--
-- TOC entry 3042 (class 2604 OID 33091)
-- Name: t_educational_program educational_program_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_educational_program ALTER COLUMN educational_program_id SET DEFAULT nextval('public.t_educational_program_educational_program_id_seq'::regclass);


--
-- TOC entry 3020 (class 2604 OID 24813)
-- Name: t_employer employer_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_employer_employer_id_seq'::regclass);


--
-- TOC entry 3030 (class 2604 OID 24880)
-- Name: t_event event_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_event ALTER COLUMN event_id SET DEFAULT nextval('public.t_events_events_id_seq'::regclass);


--
-- TOC entry 3032 (class 2604 OID 24939)
-- Name: t_group group_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_group ALTER COLUMN group_id SET DEFAULT nextval('public.t_groups_groups_id_seq'::regclass);


--
-- TOC entry 3034 (class 2604 OID 24969)
-- Name: t_head_employer head_employer_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_head_employer ALTER COLUMN head_employer_id SET DEFAULT nextval('public.t_head_employer_head_employer_id_seq'::regclass);


--
-- TOC entry 3037 (class 2604 OID 32971)
-- Name: t_head_university head_university_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_head_university ALTER COLUMN head_university_id SET DEFAULT nextval('public.t_head_university_head_university_id_seq'::regclass);


--
-- TOC entry 3039 (class 2604 OID 33050)
-- Name: t_passing_practice passing_practice_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice ALTER COLUMN passing_practice_id SET DEFAULT nextval('public.t_passing_practice_passing_practice_id_seq'::regclass);


--
-- TOC entry 3033 (class 2604 OID 24950)
-- Name: t_person person_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_person ALTER COLUMN person_id SET DEFAULT nextval('public.t_person_person_id_seq'::regclass);


--
-- TOC entry 3031 (class 2604 OID 24899)
-- Name: t_practice practice_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_practice ALTER COLUMN practice_id SET DEFAULT nextval('public.t_practice_practice_id_seq'::regclass);


--
-- TOC entry 3041 (class 2604 OID 33080)
-- Name: t_practice_result practice_result_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_practice_result ALTER COLUMN practice_result_id SET DEFAULT nextval('public.t_practice_result_practice_result_id_seq'::regclass);


--
-- TOC entry 3022 (class 2604 OID 24845)
-- Name: t_qxee_activity_employer activity_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_activity_employer ALTER COLUMN activity_id SET DEFAULT nextval('public.t_qxee_activity_employer_activity_id_seq'::regclass);


--
-- TOC entry 3023 (class 2604 OID 24846)
-- Name: t_qxee_activity_employer employer_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_activity_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_activity_employer_employer_id_seq'::regclass);


--
-- TOC entry 3024 (class 2604 OID 24854)
-- Name: t_qxee_collaboration_employer collaboration_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_collaboration_employer ALTER COLUMN collaboration_id SET DEFAULT nextval('public.t_qxee_collaboration_employer_collaboration_id_seq'::regclass);


--
-- TOC entry 3025 (class 2604 OID 24855)
-- Name: t_qxee_collaboration_employer employer_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_collaboration_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_collaboration_employer_employer_id_seq'::regclass);


--
-- TOC entry 3045 (class 2604 OID 33126)
-- Name: t_qxee_employer_result_education result_discipline_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_employer_result_education ALTER COLUMN result_discipline_id SET DEFAULT nextval('public.t_qxee_employer_result_education_result_discipline_id_seq'::regclass);


--
-- TOC entry 3046 (class 2604 OID 33127)
-- Name: t_qxee_employer_result_education employer_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_employer_result_education ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_employer_result_education_employer_id_seq'::regclass);


--
-- TOC entry 3028 (class 2604 OID 24872)
-- Name: t_qxee_practice_employer employer_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_practice_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_practice_employer_employer_id_seq'::regclass);


--
-- TOC entry 3029 (class 2604 OID 24873)
-- Name: t_qxee_practice_employer practice_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_practice_employer ALTER COLUMN practice_id SET DEFAULT nextval('public.t_qxee_practice_employer_practice_id_seq'::regclass);


--
-- TOC entry 3026 (class 2604 OID 24863)
-- Name: t_qxee_task_employer employer_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_task_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_task_employer_employer_id_seq'::regclass);


--
-- TOC entry 3027 (class 2604 OID 24864)
-- Name: t_qxee_task_employer task_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_task_employer ALTER COLUMN task_id SET DEFAULT nextval('public.t_qxee_task_employer_task_id_seq'::regclass);


--
-- TOC entry 3047 (class 2604 OID 33133)
-- Name: t_report report_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_report ALTER COLUMN report_id SET DEFAULT nextval('public.t_report_report_id_seq'::regclass);


--
-- TOC entry 3044 (class 2604 OID 33113)
-- Name: t_result_discipline result_discipline_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_result_discipline ALTER COLUMN result_discipline_id SET DEFAULT nextval('public.t_result_discipline_result_discipline_id_seq'::regclass);


--
-- TOC entry 3035 (class 2604 OID 32952)
-- Name: t_student strudent_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_student ALTER COLUMN strudent_id SET DEFAULT nextval('public.t_student_strudent_id_seq'::regclass);


--
-- TOC entry 3021 (class 2604 OID 24824)
-- Name: t_task task_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_task ALTER COLUMN task_id SET DEFAULT nextval('public.t_task_task_id_seq'::regclass);


--
-- TOC entry 3040 (class 2604 OID 33058)
-- Name: t_task_practice task_id; Type: DEFAULT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_task_practice ALTER COLUMN task_id SET DEFAULT nextval('public.t_task_practice_task_id_seq'::regclass);


--
-- TOC entry 3250 (class 0 OID 24788)
-- Dependencies: 201
-- Data for Name: t_activity; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_activity (activity_id, name, description) FROM stdin;
52	\N	test
\.


--
-- TOC entry 3252 (class 0 OID 24799)
-- Dependencies: 203
-- Data for Name: t_collaboration; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_collaboration (collaboration_id, name, description) FROM stdin;
\.


--
-- TOC entry 3286 (class 0 OID 33001)
-- Dependencies: 237
-- Data for Name: t_contact_employer; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_contact_employer (contact_employer_id, employer_id, person_id) FROM stdin;
20	\N	19
21	\N	19
22	\N	27
23	\N	28
\.


--
-- TOC entry 3282 (class 0 OID 32957)
-- Dependencies: 233
-- Data for Name: t_department; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_department (department_id, name) FROM stdin;
1	3213123
\.


--
-- TOC entry 3296 (class 0 OID 33099)
-- Dependencies: 247
-- Data for Name: t_discipline; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_discipline (discipline_id, semester, name, description, educational_program_id) FROM stdin;
\.


--
-- TOC entry 3294 (class 0 OID 33088)
-- Dependencies: 245
-- Data for Name: t_educational_program; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_educational_program (educational_program_id, name, description, field, focus) FROM stdin;
1	321	132	321	123
\.


--
-- TOC entry 3254 (class 0 OID 24810)
-- Dependencies: 205
-- Data for Name: t_employer; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_employer (employer_id, name) FROM stdin;
2	Semen
1	gfggf
\.


--
-- TOC entry 3270 (class 0 OID 24877)
-- Dependencies: 221
-- Data for Name: t_event; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_event (event_id, name, description, begin, ending, employer) FROM stdin;
2	testName	test	\N	\N	2
4	testName	test	\N	\N	2
1	testName	test	\N	\N	1
\.


--
-- TOC entry 3274 (class 0 OID 24936)
-- Dependencies: 225
-- Data for Name: t_group; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_group (group_id, number) FROM stdin;
1	КИ17-08Б
\.


--
-- TOC entry 3278 (class 0 OID 24966)
-- Dependencies: 229
-- Data for Name: t_head_employer; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_head_employer (head_employer_id, employer, person_id) FROM stdin;
17	1	\N
18	\N	\N
19	\N	\N
20	\N	\N
\.


--
-- TOC entry 3284 (class 0 OID 32968)
-- Dependencies: 235
-- Data for Name: t_head_university; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_head_university (head_university_id, department_id, person_id) FROM stdin;
1	1	\N
\.


--
-- TOC entry 3288 (class 0 OID 33047)
-- Dependencies: 239
-- Data for Name: t_passing_practice; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_passing_practice (passing_practice_id, beginning, ending, practice_id, head_employer_id, head_university_id, employer_id, student_id, task_id, report_id) FROM stdin;
1	\N	\N	\N	\N	\N	\N	\N	\N	\N
\.


--
-- TOC entry 3276 (class 0 OID 24947)
-- Dependencies: 227
-- Data for Name: t_person; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_person (person_id, fistname, lastname, patronymic, phone_number, email) FROM stdin;
27	\N	\N	\N	\N	\N
28	\N	\N	\N	\N	\N
19	\N	\N	\N	\N	\N
\.


--
-- TOC entry 3272 (class 0 OID 24896)
-- Dependencies: 223
-- Data for Name: t_practice; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_practice (practice_id, education_program_id) FROM stdin;
1	1
2	1
\.


--
-- TOC entry 3292 (class 0 OID 33077)
-- Dependencies: 243
-- Data for Name: t_practice_result; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_practice_result (practice_result_id, estimate_employer, estimate_university, student_id) FROM stdin;
\.


--
-- TOC entry 3259 (class 0 OID 24842)
-- Dependencies: 210
-- Data for Name: t_qxee_activity_employer; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_qxee_activity_employer (activity_id, employer_id) FROM stdin;
52	2
\.


--
-- TOC entry 3262 (class 0 OID 24851)
-- Dependencies: 213
-- Data for Name: t_qxee_collaboration_employer; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_qxee_collaboration_employer (collaboration_id, employer_id) FROM stdin;
\.


--
-- TOC entry 3301 (class 0 OID 33123)
-- Dependencies: 252
-- Data for Name: t_qxee_employer_result_education; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_qxee_employer_result_education (result_discipline_id, employer_id) FROM stdin;
\.


--
-- TOC entry 3268 (class 0 OID 24869)
-- Dependencies: 219
-- Data for Name: t_qxee_practice_employer; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_qxee_practice_employer (employer_id, practice_id) FROM stdin;
\.


--
-- TOC entry 3265 (class 0 OID 24860)
-- Dependencies: 216
-- Data for Name: t_qxee_task_employer; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_qxee_task_employer (employer_id, task_id) FROM stdin;
\.


--
-- TOC entry 3303 (class 0 OID 33130)
-- Dependencies: 254
-- Data for Name: t_report; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_report (report_id, report, feedback_university, feedback_employer, practice_result, head_university_id, head_employer_id, student_id) FROM stdin;
\.


--
-- TOC entry 3298 (class 0 OID 33110)
-- Dependencies: 249
-- Data for Name: t_result_discipline; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_result_discipline (result_discipline_id, description, acquired_skills, educational_program_id, discipline_id) FROM stdin;
\.


--
-- TOC entry 3280 (class 0 OID 32949)
-- Dependencies: 231
-- Data for Name: t_student; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_student (strudent_id, group_id, education_program_id, person_id) FROM stdin;
\.


--
-- TOC entry 3256 (class 0 OID 24821)
-- Dependencies: 207
-- Data for Name: t_task; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_task (task_id, name, description) FROM stdin;
2	test	test
\.


--
-- TOC entry 3290 (class 0 OID 33055)
-- Dependencies: 241
-- Data for Name: t_task_practice; Type: TABLE DATA; Schema: public; Owner: postgres
--

COPY public.t_task_practice (task_id, name, description) FROM stdin;
2	32	32
\.


--
-- TOC entry 3339 (class 0 OID 0)
-- Dependencies: 200
-- Name: t_activity_activity_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_activity_activity_id_seq', 53, true);


--
-- TOC entry 3340 (class 0 OID 0)
-- Dependencies: 202
-- Name: t_collaboration_collaboration_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_collaboration_collaboration_id_seq', 1, false);


--
-- TOC entry 3341 (class 0 OID 0)
-- Dependencies: 236
-- Name: t_contact_employer_contact_employer_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_contact_employer_contact_employer_id_seq', 23, true);


--
-- TOC entry 3342 (class 0 OID 0)
-- Dependencies: 232
-- Name: t_department_department_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_department_department_id_seq', 1, false);


--
-- TOC entry 3343 (class 0 OID 0)
-- Dependencies: 246
-- Name: t_discipline_discipline_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_discipline_discipline_id_seq', 1, false);


--
-- TOC entry 3344 (class 0 OID 0)
-- Dependencies: 244
-- Name: t_educational_program_educational_program_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_educational_program_educational_program_id_seq', 1, true);


--
-- TOC entry 3345 (class 0 OID 0)
-- Dependencies: 204
-- Name: t_employer_employer_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_employer_employer_id_seq', 2, true);


--
-- TOC entry 3346 (class 0 OID 0)
-- Dependencies: 220
-- Name: t_events_events_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_events_events_id_seq', 5, true);


--
-- TOC entry 3347 (class 0 OID 0)
-- Dependencies: 224
-- Name: t_groups_groups_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_groups_groups_id_seq', 1, true);


--
-- TOC entry 3348 (class 0 OID 0)
-- Dependencies: 228
-- Name: t_head_employer_head_employer_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_head_employer_head_employer_id_seq', 20, true);


--
-- TOC entry 3349 (class 0 OID 0)
-- Dependencies: 234
-- Name: t_head_university_head_university_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_head_university_head_university_id_seq', 1, false);


--
-- TOC entry 3350 (class 0 OID 0)
-- Dependencies: 238
-- Name: t_passing_practice_passing_practice_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_passing_practice_passing_practice_id_seq', 1, false);


--
-- TOC entry 3351 (class 0 OID 0)
-- Dependencies: 226
-- Name: t_person_person_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_person_person_id_seq', 28, true);


--
-- TOC entry 3352 (class 0 OID 0)
-- Dependencies: 222
-- Name: t_practice_practice_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_practice_practice_id_seq', 1, true);


--
-- TOC entry 3353 (class 0 OID 0)
-- Dependencies: 242
-- Name: t_practice_result_practice_result_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_practice_result_practice_result_id_seq', 1, false);


--
-- TOC entry 3354 (class 0 OID 0)
-- Dependencies: 208
-- Name: t_qxee_activity_employer_activity_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_activity_employer_activity_id_seq', 1, false);


--
-- TOC entry 3355 (class 0 OID 0)
-- Dependencies: 209
-- Name: t_qxee_activity_employer_employer_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_activity_employer_employer_id_seq', 1, false);


--
-- TOC entry 3356 (class 0 OID 0)
-- Dependencies: 211
-- Name: t_qxee_collaboration_employer_collaboration_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_collaboration_employer_collaboration_id_seq', 1, false);


--
-- TOC entry 3357 (class 0 OID 0)
-- Dependencies: 212
-- Name: t_qxee_collaboration_employer_employer_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_collaboration_employer_employer_id_seq', 1, false);


--
-- TOC entry 3358 (class 0 OID 0)
-- Dependencies: 251
-- Name: t_qxee_employer_result_education_employer_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_employer_result_education_employer_id_seq', 1, false);


--
-- TOC entry 3359 (class 0 OID 0)
-- Dependencies: 250
-- Name: t_qxee_employer_result_education_result_discipline_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_employer_result_education_result_discipline_id_seq', 1, false);


--
-- TOC entry 3360 (class 0 OID 0)
-- Dependencies: 217
-- Name: t_qxee_practice_employer_employer_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_practice_employer_employer_id_seq', 1, false);


--
-- TOC entry 3361 (class 0 OID 0)
-- Dependencies: 218
-- Name: t_qxee_practice_employer_practice_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_practice_employer_practice_id_seq', 1, false);


--
-- TOC entry 3362 (class 0 OID 0)
-- Dependencies: 214
-- Name: t_qxee_task_employer_employer_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_task_employer_employer_id_seq', 1, false);


--
-- TOC entry 3363 (class 0 OID 0)
-- Dependencies: 215
-- Name: t_qxee_task_employer_task_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_qxee_task_employer_task_id_seq', 1, false);


--
-- TOC entry 3364 (class 0 OID 0)
-- Dependencies: 253
-- Name: t_report_report_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_report_report_id_seq', 1, false);


--
-- TOC entry 3365 (class 0 OID 0)
-- Dependencies: 248
-- Name: t_result_discipline_result_discipline_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_result_discipline_result_discipline_id_seq', 1, false);


--
-- TOC entry 3366 (class 0 OID 0)
-- Dependencies: 230
-- Name: t_student_strudent_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_student_strudent_id_seq', 1, true);


--
-- TOC entry 3367 (class 0 OID 0)
-- Dependencies: 240
-- Name: t_task_practice_task_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_task_practice_task_id_seq', 1, false);


--
-- TOC entry 3368 (class 0 OID 0)
-- Dependencies: 206
-- Name: t_task_task_id_seq; Type: SEQUENCE SET; Schema: public; Owner: postgres
--

SELECT pg_catalog.setval('public.t_task_task_id_seq', 1, false);


--
-- TOC entry 3049 (class 2606 OID 24796)
-- Name: t_activity t_activity_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_activity
    ADD CONSTRAINT t_activity_pkey PRIMARY KEY (activity_id);


--
-- TOC entry 3051 (class 2606 OID 24807)
-- Name: t_collaboration t_collaboration_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_collaboration
    ADD CONSTRAINT t_collaboration_pkey PRIMARY KEY (collaboration_id);


--
-- TOC entry 3074 (class 2606 OID 33006)
-- Name: t_contact_employer t_contact_employer_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_contact_employer
    ADD CONSTRAINT t_contact_employer_pkey PRIMARY KEY (contact_employer_id);


--
-- TOC entry 3069 (class 2606 OID 32965)
-- Name: t_department t_department_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_department
    ADD CONSTRAINT t_department_pkey PRIMARY KEY (department_id);


--
-- TOC entry 3084 (class 2606 OID 33107)
-- Name: t_discipline t_discipline_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_discipline
    ADD CONSTRAINT t_discipline_pkey PRIMARY KEY (discipline_id);


--
-- TOC entry 3082 (class 2606 OID 33096)
-- Name: t_educational_program t_educational_program_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_educational_program
    ADD CONSTRAINT t_educational_program_pkey PRIMARY KEY (educational_program_id);


--
-- TOC entry 3053 (class 2606 OID 24818)
-- Name: t_employer t_employer_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_employer
    ADD CONSTRAINT t_employer_pkey PRIMARY KEY (employer_id);


--
-- TOC entry 3057 (class 2606 OID 24885)
-- Name: t_event t_events_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_event
    ADD CONSTRAINT t_events_pkey PRIMARY KEY (event_id);


--
-- TOC entry 3061 (class 2606 OID 24944)
-- Name: t_group t_groups_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_group
    ADD CONSTRAINT t_groups_pkey PRIMARY KEY (group_id);


--
-- TOC entry 3065 (class 2606 OID 24971)
-- Name: t_head_employer t_head_employer_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_head_employer
    ADD CONSTRAINT t_head_employer_pkey PRIMARY KEY (head_employer_id);


--
-- TOC entry 3071 (class 2606 OID 32973)
-- Name: t_head_university t_head_university_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_head_university
    ADD CONSTRAINT t_head_university_pkey PRIMARY KEY (head_university_id);


--
-- TOC entry 3076 (class 2606 OID 33052)
-- Name: t_passing_practice t_passing_practice_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_pkey PRIMARY KEY (passing_practice_id);


--
-- TOC entry 3063 (class 2606 OID 24955)
-- Name: t_person t_person_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_person
    ADD CONSTRAINT t_person_pkey PRIMARY KEY (person_id);


--
-- TOC entry 3059 (class 2606 OID 24901)
-- Name: t_practice t_practice_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_practice
    ADD CONSTRAINT t_practice_pkey PRIMARY KEY (practice_id);


--
-- TOC entry 3080 (class 2606 OID 33085)
-- Name: t_practice_result t_practice_result_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_practice_result
    ADD CONSTRAINT t_practice_result_pkey PRIMARY KEY (practice_result_id);


--
-- TOC entry 3088 (class 2606 OID 33138)
-- Name: t_report t_report_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_pkey PRIMARY KEY (report_id);


--
-- TOC entry 3086 (class 2606 OID 33118)
-- Name: t_result_discipline t_result_discipline_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_result_discipline
    ADD CONSTRAINT t_result_discipline_pkey PRIMARY KEY (result_discipline_id);


--
-- TOC entry 3067 (class 2606 OID 32954)
-- Name: t_student t_student_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_student
    ADD CONSTRAINT t_student_pkey PRIMARY KEY (strudent_id);


--
-- TOC entry 3055 (class 2606 OID 24829)
-- Name: t_task t_task_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_task
    ADD CONSTRAINT t_task_pkey PRIMARY KEY (task_id);


--
-- TOC entry 3078 (class 2606 OID 33063)
-- Name: t_task_practice t_task_practice_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_task_practice
    ADD CONSTRAINT t_task_practice_pkey PRIMARY KEY (task_id);


--
-- TOC entry 3072 (class 1259 OID 33145)
-- Name: fki_ке; Type: INDEX; Schema: public; Owner: postgres
--

CREATE INDEX "fki_ке" ON public.t_contact_employer USING btree (employer_id);


--
-- TOC entry 3110 (class 2606 OID 33151)
-- Name: t_discipline t_discipline_educational_program_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_discipline
    ADD CONSTRAINT t_discipline_educational_program_id_fkey FOREIGN KEY (educational_program_id) REFERENCES public.t_educational_program(educational_program_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3097 (class 2606 OID 33156)
-- Name: t_event t_event_employer_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_event
    ADD CONSTRAINT t_event_employer_fkey FOREIGN KEY (employer) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3101 (class 2606 OID 33171)
-- Name: t_head_university t_head_university_department_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_head_university
    ADD CONSTRAINT t_head_university_department_id_fkey FOREIGN KEY (department_id) REFERENCES public.t_department(department_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3105 (class 2606 OID 33211)
-- Name: t_passing_practice t_passing_practice_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3103 (class 2606 OID 33201)
-- Name: t_passing_practice t_passing_practice_head_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_head_employer_id_fkey FOREIGN KEY (head_employer_id) REFERENCES public.t_head_employer(head_employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3104 (class 2606 OID 33206)
-- Name: t_passing_practice t_passing_practice_head_university_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_head_university_id_fkey FOREIGN KEY (head_university_id) REFERENCES public.t_head_university(head_university_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3102 (class 2606 OID 33196)
-- Name: t_passing_practice t_passing_practice_practice_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_practice_id_fkey FOREIGN KEY (practice_id) REFERENCES public.t_practice(practice_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3108 (class 2606 OID 33321)
-- Name: t_passing_practice t_passing_practice_report_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_report_id_fkey FOREIGN KEY (report_id) REFERENCES public.t_report(report_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3107 (class 2606 OID 33216)
-- Name: t_passing_practice t_passing_practice_student_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_student_id_fkey FOREIGN KEY (student_id) REFERENCES public.t_student(strudent_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3106 (class 2606 OID 33221)
-- Name: t_passing_practice t_passing_practice_task_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_task_id_fkey FOREIGN KEY (task_id) REFERENCES public.t_task(task_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3098 (class 2606 OID 33226)
-- Name: t_practice t_practice_education_program_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_practice
    ADD CONSTRAINT t_practice_education_program_id_fkey FOREIGN KEY (education_program_id) REFERENCES public.t_educational_program(educational_program_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3109 (class 2606 OID 33326)
-- Name: t_practice_result t_practice_result_student_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_practice_result
    ADD CONSTRAINT t_practice_result_student_id_fkey FOREIGN KEY (student_id) REFERENCES public.t_student(strudent_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3089 (class 2606 OID 33266)
-- Name: t_qxee_activity_employer t_qxee_activity_employer_activity_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_activity_employer
    ADD CONSTRAINT t_qxee_activity_employer_activity_id_fkey FOREIGN KEY (activity_id) REFERENCES public.t_activity(activity_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3090 (class 2606 OID 33271)
-- Name: t_qxee_activity_employer t_qxee_activity_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_activity_employer
    ADD CONSTRAINT t_qxee_activity_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3091 (class 2606 OID 33276)
-- Name: t_qxee_collaboration_employer t_qxee_collaboration_employer_collaboration_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_collaboration_employer
    ADD CONSTRAINT t_qxee_collaboration_employer_collaboration_id_fkey FOREIGN KEY (collaboration_id) REFERENCES public.t_collaboration(collaboration_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3092 (class 2606 OID 33281)
-- Name: t_qxee_collaboration_employer t_qxee_collaboration_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_collaboration_employer
    ADD CONSTRAINT t_qxee_collaboration_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id);


--
-- TOC entry 3114 (class 2606 OID 33291)
-- Name: t_qxee_employer_result_education t_qxee_employer_result_education_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_employer_result_education
    ADD CONSTRAINT t_qxee_employer_result_education_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3113 (class 2606 OID 33286)
-- Name: t_qxee_employer_result_education t_qxee_employer_result_education_result_discipline_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_employer_result_education
    ADD CONSTRAINT t_qxee_employer_result_education_result_discipline_id_fkey FOREIGN KEY (result_discipline_id) REFERENCES public.t_result_discipline(result_discipline_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3095 (class 2606 OID 33296)
-- Name: t_qxee_practice_employer t_qxee_practice_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_practice_employer
    ADD CONSTRAINT t_qxee_practice_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3096 (class 2606 OID 33301)
-- Name: t_qxee_practice_employer t_qxee_practice_employer_practice_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_practice_employer
    ADD CONSTRAINT t_qxee_practice_employer_practice_id_fkey FOREIGN KEY (practice_id) REFERENCES public.t_practice(practice_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3093 (class 2606 OID 33306)
-- Name: t_qxee_task_employer t_qxee_task_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_task_employer
    ADD CONSTRAINT t_qxee_task_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3094 (class 2606 OID 33311)
-- Name: t_qxee_task_employer t_qxee_task_employer_task_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_qxee_task_employer
    ADD CONSTRAINT t_qxee_task_employer_task_id_fkey FOREIGN KEY (task_id) REFERENCES public.t_task(task_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3117 (class 2606 OID 33241)
-- Name: t_report t_report_head_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_head_employer_id_fkey FOREIGN KEY (head_employer_id) REFERENCES public.t_head_employer(head_employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3116 (class 2606 OID 33236)
-- Name: t_report t_report_head_university_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_head_university_id_fkey FOREIGN KEY (head_university_id) REFERENCES public.t_head_university(head_university_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3115 (class 2606 OID 33231)
-- Name: t_report t_report_practice_result_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_practice_result_fkey FOREIGN KEY (practice_result) REFERENCES public.t_practice_result(practice_result_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3118 (class 2606 OID 33316)
-- Name: t_report t_report_student_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_student_id_fkey FOREIGN KEY (student_id) REFERENCES public.t_student(strudent_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3112 (class 2606 OID 33251)
-- Name: t_result_discipline t_result_discipline_discipline_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_result_discipline
    ADD CONSTRAINT t_result_discipline_discipline_id_fkey FOREIGN KEY (discipline_id) REFERENCES public.t_discipline(discipline_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3111 (class 2606 OID 33246)
-- Name: t_result_discipline t_result_discipline_educational_program_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_result_discipline
    ADD CONSTRAINT t_result_discipline_educational_program_id_fkey FOREIGN KEY (educational_program_id) REFERENCES public.t_educational_program(educational_program_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3100 (class 2606 OID 33261)
-- Name: t_student t_student_education_program_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_student
    ADD CONSTRAINT t_student_education_program_id_fkey FOREIGN KEY (education_program_id) REFERENCES public.t_educational_program(educational_program_id);


--
-- TOC entry 3099 (class 2606 OID 33256)
-- Name: t_student t_student_group_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY public.t_student
    ADD CONSTRAINT t_student_group_id_fkey FOREIGN KEY (group_id) REFERENCES public.t_group(group_id) ON UPDATE CASCADE ON DELETE CASCADE;


-- Completed on 2021-04-01 17:45:35

--
-- PostgreSQL database dump complete
--

