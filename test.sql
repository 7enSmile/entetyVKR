--
-- PostgreSQL database dump
--

-- Dumped from database version 14.9 (Ubuntu 14.9-0ubuntu0.22.04.1)
-- Dumped by pg_dump version 14.9 (Ubuntu 14.9-0ubuntu0.22.04.1)

-- Started on 2023-10-12 22:20:08 +07

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
-- TOC entry 209 (class 1259 OID 17256)
-- Name: t_activity; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_activity (
    activity_id bigint NOT NULL,
    name text,
    description text
);


--
-- TOC entry 210 (class 1259 OID 17261)
-- Name: t_activity_activity_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_activity_activity_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3561 (class 0 OID 0)
-- Dependencies: 210
-- Name: t_activity_activity_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_activity_activity_id_seq OWNED BY public.t_activity.activity_id;


--
-- TOC entry 211 (class 1259 OID 17262)
-- Name: t_collaboration; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_collaboration (
    collaboration_id bigint NOT NULL,
    name text,
    description text
);


--
-- TOC entry 212 (class 1259 OID 17267)
-- Name: t_collaboration_collaboration_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_collaboration_collaboration_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3562 (class 0 OID 0)
-- Dependencies: 212
-- Name: t_collaboration_collaboration_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_collaboration_collaboration_id_seq OWNED BY public.t_collaboration.collaboration_id;


--
-- TOC entry 213 (class 1259 OID 17268)
-- Name: t_contact_employer; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_contact_employer (
    contact_employer_id bigint NOT NULL,
    employer_id integer,
    person_id integer NOT NULL
);


--
-- TOC entry 214 (class 1259 OID 17271)
-- Name: t_contact_employer_contact_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_contact_employer_contact_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3563 (class 0 OID 0)
-- Dependencies: 214
-- Name: t_contact_employer_contact_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_contact_employer_contact_employer_id_seq OWNED BY public.t_contact_employer.contact_employer_id;


--
-- TOC entry 215 (class 1259 OID 17272)
-- Name: t_department; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_department (
    department_id bigint NOT NULL,
    name text
);


--
-- TOC entry 216 (class 1259 OID 17277)
-- Name: t_department_department_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_department_department_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3564 (class 0 OID 0)
-- Dependencies: 216
-- Name: t_department_department_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_department_department_id_seq OWNED BY public.t_department.department_id;


--
-- TOC entry 217 (class 1259 OID 17278)
-- Name: t_discipline; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_discipline (
    discipline_id bigint NOT NULL,
    semester integer,
    name text,
    description text,
    educational_program_id integer
);


--
-- TOC entry 218 (class 1259 OID 17283)
-- Name: t_discipline_discipline_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_discipline_discipline_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3565 (class 0 OID 0)
-- Dependencies: 218
-- Name: t_discipline_discipline_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_discipline_discipline_id_seq OWNED BY public.t_discipline.discipline_id;


--
-- TOC entry 219 (class 1259 OID 17284)
-- Name: t_educational_program; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_educational_program (
    educational_program_id bigint NOT NULL,
    name text,
    description text,
    field text,
    focus text
);


--
-- TOC entry 220 (class 1259 OID 17289)
-- Name: t_educational_program_educational_program_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_educational_program_educational_program_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3566 (class 0 OID 0)
-- Dependencies: 220
-- Name: t_educational_program_educational_program_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_educational_program_educational_program_id_seq OWNED BY public.t_educational_program.educational_program_id;


--
-- TOC entry 221 (class 1259 OID 17290)
-- Name: t_employer; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_employer (
    employer_id bigint NOT NULL,
    name text
);


--
-- TOC entry 222 (class 1259 OID 17295)
-- Name: t_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3567 (class 0 OID 0)
-- Dependencies: 222
-- Name: t_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_employer_employer_id_seq OWNED BY public.t_employer.employer_id;


--
-- TOC entry 223 (class 1259 OID 17296)
-- Name: t_event; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_event (
    event_id bigint NOT NULL,
    name text,
    description text,
    begin date,
    ending date,
    employer integer
);


--
-- TOC entry 224 (class 1259 OID 17301)
-- Name: t_events_events_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_events_events_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3568 (class 0 OID 0)
-- Dependencies: 224
-- Name: t_events_events_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_events_events_id_seq OWNED BY public.t_event.event_id;


--
-- TOC entry 225 (class 1259 OID 17302)
-- Name: t_group; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_group (
    group_id bigint NOT NULL,
    number text
);


--
-- TOC entry 226 (class 1259 OID 17307)
-- Name: t_groups_groups_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_groups_groups_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3569 (class 0 OID 0)
-- Dependencies: 226
-- Name: t_groups_groups_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_groups_groups_id_seq OWNED BY public.t_group.group_id;


--
-- TOC entry 227 (class 1259 OID 17308)
-- Name: t_head_employer; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_head_employer (
    head_employer_id bigint NOT NULL,
    employer integer,
    person_id integer NOT NULL
);


--
-- TOC entry 228 (class 1259 OID 17311)
-- Name: t_head_employer_head_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_head_employer_head_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3570 (class 0 OID 0)
-- Dependencies: 228
-- Name: t_head_employer_head_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_head_employer_head_employer_id_seq OWNED BY public.t_head_employer.head_employer_id;


--
-- TOC entry 229 (class 1259 OID 17312)
-- Name: t_head_university; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_head_university (
    head_university_id bigint NOT NULL,
    department_id integer,
    person_id integer NOT NULL
);


--
-- TOC entry 230 (class 1259 OID 17315)
-- Name: t_head_university_head_university_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_head_university_head_university_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3571 (class 0 OID 0)
-- Dependencies: 230
-- Name: t_head_university_head_university_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_head_university_head_university_id_seq OWNED BY public.t_head_university.head_university_id;


--
-- TOC entry 231 (class 1259 OID 17316)
-- Name: t_passing_practice; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_passing_practice (
    passing_practice_id bigint NOT NULL,
    practice_id integer,
    head_employer_id integer,
    head_university_id integer,
    employer_id integer,
    student_id integer,
    task_id integer
);


--
-- TOC entry 232 (class 1259 OID 17319)
-- Name: t_passing_practice_passing_practice_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_passing_practice_passing_practice_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3572 (class 0 OID 0)
-- Dependencies: 232
-- Name: t_passing_practice_passing_practice_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_passing_practice_passing_practice_id_seq OWNED BY public.t_passing_practice.passing_practice_id;


--
-- TOC entry 233 (class 1259 OID 17320)
-- Name: t_person; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_person (
    person_id bigint NOT NULL,
    fistname text,
    lastname text,
    patronymic text,
    phone_number text,
    email text
);


--
-- TOC entry 234 (class 1259 OID 17325)
-- Name: t_person_person_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_person_person_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3573 (class 0 OID 0)
-- Dependencies: 234
-- Name: t_person_person_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_person_person_id_seq OWNED BY public.t_person.person_id;


--
-- TOC entry 235 (class 1259 OID 17326)
-- Name: t_practice; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_practice (
    practice_id bigint NOT NULL,
    education_program_id integer,
    beginning date,
    ending date,
    employer_id integer,
    semester integer,
    customid text
);


--
-- TOC entry 236 (class 1259 OID 17331)
-- Name: t_practice_practice_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_practice_practice_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3574 (class 0 OID 0)
-- Dependencies: 236
-- Name: t_practice_practice_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_practice_practice_id_seq OWNED BY public.t_practice.practice_id;


--
-- TOC entry 237 (class 1259 OID 17332)
-- Name: t_practice_result; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_practice_result (
    practice_result_id bigint NOT NULL,
    estimate_employer text,
    estimate_university text,
    student_id integer,
    passing_practice_id integer
);


--
-- TOC entry 238 (class 1259 OID 17337)
-- Name: t_practice_result_practice_result_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_practice_result_practice_result_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3575 (class 0 OID 0)
-- Dependencies: 238
-- Name: t_practice_result_practice_result_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_practice_result_practice_result_id_seq OWNED BY public.t_practice_result.practice_result_id;


--
-- TOC entry 239 (class 1259 OID 17338)
-- Name: t_qxee_activity_employer; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_qxee_activity_employer (
    activity_id bigint NOT NULL,
    employer_id bigint NOT NULL
);


--
-- TOC entry 240 (class 1259 OID 17341)
-- Name: t_qxee_activity_employer_activity_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_activity_employer_activity_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3576 (class 0 OID 0)
-- Dependencies: 240
-- Name: t_qxee_activity_employer_activity_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_activity_employer_activity_id_seq OWNED BY public.t_qxee_activity_employer.activity_id;


--
-- TOC entry 241 (class 1259 OID 17342)
-- Name: t_qxee_activity_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_activity_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3577 (class 0 OID 0)
-- Dependencies: 241
-- Name: t_qxee_activity_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_activity_employer_employer_id_seq OWNED BY public.t_qxee_activity_employer.employer_id;


--
-- TOC entry 242 (class 1259 OID 17343)
-- Name: t_qxee_collaboration_employer; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_qxee_collaboration_employer (
    collaboration_id bigint NOT NULL,
    employer_id bigint NOT NULL
);


--
-- TOC entry 243 (class 1259 OID 17346)
-- Name: t_qxee_collaboration_employer_collaboration_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_collaboration_employer_collaboration_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3578 (class 0 OID 0)
-- Dependencies: 243
-- Name: t_qxee_collaboration_employer_collaboration_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_collaboration_employer_collaboration_id_seq OWNED BY public.t_qxee_collaboration_employer.collaboration_id;


--
-- TOC entry 244 (class 1259 OID 17347)
-- Name: t_qxee_collaboration_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_collaboration_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3579 (class 0 OID 0)
-- Dependencies: 244
-- Name: t_qxee_collaboration_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_collaboration_employer_employer_id_seq OWNED BY public.t_qxee_collaboration_employer.employer_id;


--
-- TOC entry 245 (class 1259 OID 17348)
-- Name: t_qxee_employer_result_education; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_qxee_employer_result_education (
    result_discipline_id bigint NOT NULL,
    employer_id bigint NOT NULL
);


--
-- TOC entry 246 (class 1259 OID 17351)
-- Name: t_qxee_employer_result_education_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_employer_result_education_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3580 (class 0 OID 0)
-- Dependencies: 246
-- Name: t_qxee_employer_result_education_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_employer_result_education_employer_id_seq OWNED BY public.t_qxee_employer_result_education.employer_id;


--
-- TOC entry 247 (class 1259 OID 17352)
-- Name: t_qxee_employer_result_education_result_discipline_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_employer_result_education_result_discipline_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3581 (class 0 OID 0)
-- Dependencies: 247
-- Name: t_qxee_employer_result_education_result_discipline_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_employer_result_education_result_discipline_id_seq OWNED BY public.t_qxee_employer_result_education.result_discipline_id;


--
-- TOC entry 248 (class 1259 OID 17353)
-- Name: t_qxee_practice_employer; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_qxee_practice_employer (
    employer_id bigint NOT NULL,
    practice_id bigint NOT NULL
);


--
-- TOC entry 249 (class 1259 OID 17356)
-- Name: t_qxee_practice_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_practice_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3582 (class 0 OID 0)
-- Dependencies: 249
-- Name: t_qxee_practice_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_practice_employer_employer_id_seq OWNED BY public.t_qxee_practice_employer.employer_id;


--
-- TOC entry 250 (class 1259 OID 17357)
-- Name: t_qxee_practice_employer_practice_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_practice_employer_practice_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3583 (class 0 OID 0)
-- Dependencies: 250
-- Name: t_qxee_practice_employer_practice_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_practice_employer_practice_id_seq OWNED BY public.t_qxee_practice_employer.practice_id;


--
-- TOC entry 251 (class 1259 OID 17358)
-- Name: t_qxee_task_employer; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_qxee_task_employer (
    employer_id bigint NOT NULL,
    task_id bigint NOT NULL
);


--
-- TOC entry 252 (class 1259 OID 17361)
-- Name: t_qxee_task_employer_employer_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_task_employer_employer_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3584 (class 0 OID 0)
-- Dependencies: 252
-- Name: t_qxee_task_employer_employer_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_task_employer_employer_id_seq OWNED BY public.t_qxee_task_employer.employer_id;


--
-- TOC entry 253 (class 1259 OID 17362)
-- Name: t_qxee_task_employer_task_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_qxee_task_employer_task_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3585 (class 0 OID 0)
-- Dependencies: 253
-- Name: t_qxee_task_employer_task_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_qxee_task_employer_task_id_seq OWNED BY public.t_qxee_task_employer.task_id;


--
-- TOC entry 254 (class 1259 OID 17363)
-- Name: t_report; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_report (
    report_id bigint NOT NULL,
    report bytea,
    feedback_university text,
    feedback_employer text,
    practice_result integer,
    head_university_id integer,
    head_employer_id integer,
    student_id integer,
    passing_practice_id integer
);


--
-- TOC entry 255 (class 1259 OID 17368)
-- Name: t_report_report_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_report_report_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3586 (class 0 OID 0)
-- Dependencies: 255
-- Name: t_report_report_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_report_report_id_seq OWNED BY public.t_report.report_id;


--
-- TOC entry 256 (class 1259 OID 17369)
-- Name: t_result_discipline; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_result_discipline (
    result_discipline_id bigint NOT NULL,
    description text,
    acquired_skills text,
    educational_program_id integer,
    discipline_id integer
);


--
-- TOC entry 257 (class 1259 OID 17374)
-- Name: t_result_discipline_result_discipline_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_result_discipline_result_discipline_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3587 (class 0 OID 0)
-- Dependencies: 257
-- Name: t_result_discipline_result_discipline_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_result_discipline_result_discipline_id_seq OWNED BY public.t_result_discipline.result_discipline_id;


--
-- TOC entry 258 (class 1259 OID 17375)
-- Name: t_student; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_student (
    strudent_id bigint NOT NULL,
    group_id integer,
    education_program_id integer,
    person_id integer NOT NULL
);


--
-- TOC entry 259 (class 1259 OID 17378)
-- Name: t_student_strudent_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_student_strudent_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3588 (class 0 OID 0)
-- Dependencies: 259
-- Name: t_student_strudent_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_student_strudent_id_seq OWNED BY public.t_student.strudent_id;


--
-- TOC entry 260 (class 1259 OID 17379)
-- Name: t_task; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_task (
    task_id bigint NOT NULL,
    name text,
    description text
);


--
-- TOC entry 261 (class 1259 OID 17384)
-- Name: t_task_practice; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_task_practice (
    task_id bigint NOT NULL,
    name text,
    description text
);


--
-- TOC entry 262 (class 1259 OID 17389)
-- Name: t_task_practice_task_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_task_practice_task_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3589 (class 0 OID 0)
-- Dependencies: 262
-- Name: t_task_practice_task_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_task_practice_task_id_seq OWNED BY public.t_task_practice.task_id;


--
-- TOC entry 263 (class 1259 OID 17390)
-- Name: t_task_task_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_task_task_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3590 (class 0 OID 0)
-- Dependencies: 263
-- Name: t_task_task_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_task_task_id_seq OWNED BY public.t_task.task_id;


--
-- TOC entry 264 (class 1259 OID 17391)
-- Name: t_test_practice; Type: TABLE; Schema: public; Owner: -
--

CREATE TABLE public.t_test_practice (
    test_practice_id bigint NOT NULL,
    name text,
    data bytea,
    practice_id integer,
    employer_id integer
);


--
-- TOC entry 265 (class 1259 OID 17396)
-- Name: t_test_practice_tes_tractice_id_seq; Type: SEQUENCE; Schema: public; Owner: -
--

CREATE SEQUENCE public.t_test_practice_tes_tractice_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


--
-- TOC entry 3591 (class 0 OID 0)
-- Dependencies: 265
-- Name: t_test_practice_tes_tractice_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: -
--

ALTER SEQUENCE public.t_test_practice_tes_tractice_id_seq OWNED BY public.t_test_practice.test_practice_id;


--
-- TOC entry 3303 (class 2604 OID 17397)
-- Name: t_activity activity_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_activity ALTER COLUMN activity_id SET DEFAULT nextval('public.t_activity_activity_id_seq'::regclass);


--
-- TOC entry 3304 (class 2604 OID 17398)
-- Name: t_collaboration collaboration_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_collaboration ALTER COLUMN collaboration_id SET DEFAULT nextval('public.t_collaboration_collaboration_id_seq'::regclass);


--
-- TOC entry 3305 (class 2604 OID 17399)
-- Name: t_contact_employer contact_employer_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_contact_employer ALTER COLUMN contact_employer_id SET DEFAULT nextval('public.t_contact_employer_contact_employer_id_seq'::regclass);


--
-- TOC entry 3306 (class 2604 OID 17400)
-- Name: t_department department_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_department ALTER COLUMN department_id SET DEFAULT nextval('public.t_department_department_id_seq'::regclass);


--
-- TOC entry 3307 (class 2604 OID 17401)
-- Name: t_discipline discipline_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_discipline ALTER COLUMN discipline_id SET DEFAULT nextval('public.t_discipline_discipline_id_seq'::regclass);


--
-- TOC entry 3308 (class 2604 OID 17402)
-- Name: t_educational_program educational_program_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_educational_program ALTER COLUMN educational_program_id SET DEFAULT nextval('public.t_educational_program_educational_program_id_seq'::regclass);


--
-- TOC entry 3309 (class 2604 OID 17403)
-- Name: t_employer employer_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_employer_employer_id_seq'::regclass);


--
-- TOC entry 3310 (class 2604 OID 17404)
-- Name: t_event event_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_event ALTER COLUMN event_id SET DEFAULT nextval('public.t_events_events_id_seq'::regclass);


--
-- TOC entry 3311 (class 2604 OID 17405)
-- Name: t_group group_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_group ALTER COLUMN group_id SET DEFAULT nextval('public.t_groups_groups_id_seq'::regclass);


--
-- TOC entry 3312 (class 2604 OID 17406)
-- Name: t_head_employer head_employer_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_head_employer ALTER COLUMN head_employer_id SET DEFAULT nextval('public.t_head_employer_head_employer_id_seq'::regclass);


--
-- TOC entry 3313 (class 2604 OID 17407)
-- Name: t_head_university head_university_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_head_university ALTER COLUMN head_university_id SET DEFAULT nextval('public.t_head_university_head_university_id_seq'::regclass);


--
-- TOC entry 3314 (class 2604 OID 17408)
-- Name: t_passing_practice passing_practice_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_passing_practice ALTER COLUMN passing_practice_id SET DEFAULT nextval('public.t_passing_practice_passing_practice_id_seq'::regclass);


--
-- TOC entry 3315 (class 2604 OID 17409)
-- Name: t_person person_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_person ALTER COLUMN person_id SET DEFAULT nextval('public.t_person_person_id_seq'::regclass);


--
-- TOC entry 3316 (class 2604 OID 17410)
-- Name: t_practice practice_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_practice ALTER COLUMN practice_id SET DEFAULT nextval('public.t_practice_practice_id_seq'::regclass);


--
-- TOC entry 3317 (class 2604 OID 17411)
-- Name: t_practice_result practice_result_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_practice_result ALTER COLUMN practice_result_id SET DEFAULT nextval('public.t_practice_result_practice_result_id_seq'::regclass);


--
-- TOC entry 3318 (class 2604 OID 17412)
-- Name: t_qxee_activity_employer activity_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_activity_employer ALTER COLUMN activity_id SET DEFAULT nextval('public.t_qxee_activity_employer_activity_id_seq'::regclass);


--
-- TOC entry 3319 (class 2604 OID 17413)
-- Name: t_qxee_activity_employer employer_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_activity_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_activity_employer_employer_id_seq'::regclass);


--
-- TOC entry 3320 (class 2604 OID 17414)
-- Name: t_qxee_collaboration_employer collaboration_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_collaboration_employer ALTER COLUMN collaboration_id SET DEFAULT nextval('public.t_qxee_collaboration_employer_collaboration_id_seq'::regclass);


--
-- TOC entry 3321 (class 2604 OID 17415)
-- Name: t_qxee_collaboration_employer employer_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_collaboration_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_collaboration_employer_employer_id_seq'::regclass);


--
-- TOC entry 3322 (class 2604 OID 17416)
-- Name: t_qxee_employer_result_education result_discipline_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_employer_result_education ALTER COLUMN result_discipline_id SET DEFAULT nextval('public.t_qxee_employer_result_education_result_discipline_id_seq'::regclass);


--
-- TOC entry 3323 (class 2604 OID 17417)
-- Name: t_qxee_employer_result_education employer_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_employer_result_education ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_employer_result_education_employer_id_seq'::regclass);


--
-- TOC entry 3324 (class 2604 OID 17418)
-- Name: t_qxee_practice_employer employer_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_practice_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_practice_employer_employer_id_seq'::regclass);


--
-- TOC entry 3325 (class 2604 OID 17419)
-- Name: t_qxee_practice_employer practice_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_practice_employer ALTER COLUMN practice_id SET DEFAULT nextval('public.t_qxee_practice_employer_practice_id_seq'::regclass);


--
-- TOC entry 3326 (class 2604 OID 17420)
-- Name: t_qxee_task_employer employer_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_task_employer ALTER COLUMN employer_id SET DEFAULT nextval('public.t_qxee_task_employer_employer_id_seq'::regclass);


--
-- TOC entry 3327 (class 2604 OID 17421)
-- Name: t_qxee_task_employer task_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_task_employer ALTER COLUMN task_id SET DEFAULT nextval('public.t_qxee_task_employer_task_id_seq'::regclass);


--
-- TOC entry 3328 (class 2604 OID 17422)
-- Name: t_report report_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_report ALTER COLUMN report_id SET DEFAULT nextval('public.t_report_report_id_seq'::regclass);


--
-- TOC entry 3329 (class 2604 OID 17423)
-- Name: t_result_discipline result_discipline_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_result_discipline ALTER COLUMN result_discipline_id SET DEFAULT nextval('public.t_result_discipline_result_discipline_id_seq'::regclass);


--
-- TOC entry 3330 (class 2604 OID 17424)
-- Name: t_student strudent_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_student ALTER COLUMN strudent_id SET DEFAULT nextval('public.t_student_strudent_id_seq'::regclass);


--
-- TOC entry 3331 (class 2604 OID 17425)
-- Name: t_task task_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_task ALTER COLUMN task_id SET DEFAULT nextval('public.t_task_task_id_seq'::regclass);


--
-- TOC entry 3332 (class 2604 OID 17426)
-- Name: t_task_practice task_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_task_practice ALTER COLUMN task_id SET DEFAULT nextval('public.t_task_practice_task_id_seq'::regclass);


--
-- TOC entry 3333 (class 2604 OID 17427)
-- Name: t_test_practice test_practice_id; Type: DEFAULT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_test_practice ALTER COLUMN test_practice_id SET DEFAULT nextval('public.t_test_practice_tes_tractice_id_seq'::regclass);


--
-- TOC entry 3335 (class 2606 OID 17431)
-- Name: t_activity t_activity_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_activity
    ADD CONSTRAINT t_activity_pkey PRIMARY KEY (activity_id);


--
-- TOC entry 3337 (class 2606 OID 17433)
-- Name: t_collaboration t_collaboration_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_collaboration
    ADD CONSTRAINT t_collaboration_pkey PRIMARY KEY (collaboration_id);


--
-- TOC entry 3340 (class 2606 OID 17435)
-- Name: t_contact_employer t_contact_employer_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_contact_employer
    ADD CONSTRAINT t_contact_employer_pkey PRIMARY KEY (contact_employer_id);


--
-- TOC entry 3342 (class 2606 OID 17437)
-- Name: t_department t_department_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_department
    ADD CONSTRAINT t_department_pkey PRIMARY KEY (department_id);


--
-- TOC entry 3344 (class 2606 OID 17439)
-- Name: t_discipline t_discipline_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_discipline
    ADD CONSTRAINT t_discipline_pkey PRIMARY KEY (discipline_id);


--
-- TOC entry 3346 (class 2606 OID 17441)
-- Name: t_educational_program t_educational_program_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_educational_program
    ADD CONSTRAINT t_educational_program_pkey PRIMARY KEY (educational_program_id);


--
-- TOC entry 3348 (class 2606 OID 17443)
-- Name: t_employer t_employer_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_employer
    ADD CONSTRAINT t_employer_pkey PRIMARY KEY (employer_id);


--
-- TOC entry 3350 (class 2606 OID 17445)
-- Name: t_event t_events_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_event
    ADD CONSTRAINT t_events_pkey PRIMARY KEY (event_id);


--
-- TOC entry 3352 (class 2606 OID 17447)
-- Name: t_group t_groups_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_group
    ADD CONSTRAINT t_groups_pkey PRIMARY KEY (group_id);


--
-- TOC entry 3354 (class 2606 OID 17449)
-- Name: t_head_employer t_head_employer_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_head_employer
    ADD CONSTRAINT t_head_employer_pkey PRIMARY KEY (head_employer_id);


--
-- TOC entry 3356 (class 2606 OID 17451)
-- Name: t_head_university t_head_university_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_head_university
    ADD CONSTRAINT t_head_university_pkey PRIMARY KEY (head_university_id);


--
-- TOC entry 3358 (class 2606 OID 17453)
-- Name: t_passing_practice t_passing_practice_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_pkey PRIMARY KEY (passing_practice_id);


--
-- TOC entry 3360 (class 2606 OID 17455)
-- Name: t_person t_person_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_person
    ADD CONSTRAINT t_person_pkey PRIMARY KEY (person_id);


--
-- TOC entry 3362 (class 2606 OID 17457)
-- Name: t_practice t_practice_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_practice
    ADD CONSTRAINT t_practice_pkey PRIMARY KEY (practice_id);


--
-- TOC entry 3364 (class 2606 OID 17459)
-- Name: t_practice_result t_practice_result_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_practice_result
    ADD CONSTRAINT t_practice_result_pkey PRIMARY KEY (practice_result_id);


--
-- TOC entry 3366 (class 2606 OID 17461)
-- Name: t_report t_report_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_pkey PRIMARY KEY (report_id);


--
-- TOC entry 3368 (class 2606 OID 17463)
-- Name: t_result_discipline t_result_discipline_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_result_discipline
    ADD CONSTRAINT t_result_discipline_pkey PRIMARY KEY (result_discipline_id);


--
-- TOC entry 3370 (class 2606 OID 17465)
-- Name: t_student t_student_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_student
    ADD CONSTRAINT t_student_pkey PRIMARY KEY (strudent_id);


--
-- TOC entry 3372 (class 2606 OID 17467)
-- Name: t_task t_task_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_task
    ADD CONSTRAINT t_task_pkey PRIMARY KEY (task_id);


--
-- TOC entry 3374 (class 2606 OID 17469)
-- Name: t_task_practice t_task_practice_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_task_practice
    ADD CONSTRAINT t_task_practice_pkey PRIMARY KEY (task_id);


--
-- TOC entry 3376 (class 2606 OID 17471)
-- Name: t_test_practice t_test_practice_pkey; Type: CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_test_practice
    ADD CONSTRAINT t_test_practice_pkey PRIMARY KEY (test_practice_id);


--
-- TOC entry 3338 (class 1259 OID 17472)
-- Name: fki_ке; Type: INDEX; Schema: public; Owner: -
--

CREATE INDEX "fki_ке" ON public.t_contact_employer USING btree (employer_id);


--
-- TOC entry 3377 (class 2606 OID 17473)
-- Name: t_contact_employer t_contact_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_contact_employer
    ADD CONSTRAINT t_contact_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON DELETE CASCADE;


--
-- TOC entry 3378 (class 2606 OID 17478)
-- Name: t_contact_employer t_contact_employer_person_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_contact_employer
    ADD CONSTRAINT t_contact_employer_person_id_fkey FOREIGN KEY (person_id) REFERENCES public.t_person(person_id) ON DELETE CASCADE;


--
-- TOC entry 3379 (class 2606 OID 17483)
-- Name: t_discipline t_discipline_educational_program_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_discipline
    ADD CONSTRAINT t_discipline_educational_program_id_fkey FOREIGN KEY (educational_program_id) REFERENCES public.t_educational_program(educational_program_id) ON DELETE CASCADE;


--
-- TOC entry 3380 (class 2606 OID 17488)
-- Name: t_event t_event_employer_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_event
    ADD CONSTRAINT t_event_employer_fkey FOREIGN KEY (employer) REFERENCES public.t_employer(employer_id) ON DELETE CASCADE;


--
-- TOC entry 3381 (class 2606 OID 17493)
-- Name: t_head_employer t_head_employer_employer_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_head_employer
    ADD CONSTRAINT t_head_employer_employer_fkey FOREIGN KEY (employer) REFERENCES public.t_employer(employer_id) ON DELETE SET NULL;


--
-- TOC entry 3382 (class 2606 OID 17498)
-- Name: t_head_employer t_head_employer_person_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_head_employer
    ADD CONSTRAINT t_head_employer_person_id_fkey FOREIGN KEY (person_id) REFERENCES public.t_person(person_id) ON DELETE CASCADE;


--
-- TOC entry 3383 (class 2606 OID 17503)
-- Name: t_head_university t_head_university_department_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_head_university
    ADD CONSTRAINT t_head_university_department_id_fkey FOREIGN KEY (department_id) REFERENCES public.t_department(department_id) ON DELETE SET NULL;


--
-- TOC entry 3384 (class 2606 OID 17508)
-- Name: t_head_university t_head_university_person_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_head_university
    ADD CONSTRAINT t_head_university_person_id_fkey FOREIGN KEY (person_id) REFERENCES public.t_person(person_id) ON DELETE CASCADE;


--
-- TOC entry 3385 (class 2606 OID 17513)
-- Name: t_passing_practice t_passing_practice_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON DELETE CASCADE;


--
-- TOC entry 3386 (class 2606 OID 17518)
-- Name: t_passing_practice t_passing_practice_head_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_head_employer_id_fkey FOREIGN KEY (head_employer_id) REFERENCES public.t_head_employer(head_employer_id) ON DELETE SET NULL;


--
-- TOC entry 3387 (class 2606 OID 17523)
-- Name: t_passing_practice t_passing_practice_head_university_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_head_university_id_fkey FOREIGN KEY (head_university_id) REFERENCES public.t_head_university(head_university_id) ON DELETE SET NULL;


--
-- TOC entry 3388 (class 2606 OID 17528)
-- Name: t_passing_practice t_passing_practice_practice_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_practice_id_fkey FOREIGN KEY (practice_id) REFERENCES public.t_practice(practice_id) ON DELETE CASCADE;


--
-- TOC entry 3389 (class 2606 OID 17533)
-- Name: t_passing_practice t_passing_practice_student_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_student_id_fkey FOREIGN KEY (student_id) REFERENCES public.t_student(strudent_id) ON DELETE CASCADE;


--
-- TOC entry 3390 (class 2606 OID 17538)
-- Name: t_passing_practice t_passing_practice_task_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_passing_practice
    ADD CONSTRAINT t_passing_practice_task_id_fkey FOREIGN KEY (task_id) REFERENCES public.t_task_practice(task_id) ON DELETE SET NULL;


--
-- TOC entry 3391 (class 2606 OID 17543)
-- Name: t_practice t_practice_education_program_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_practice
    ADD CONSTRAINT t_practice_education_program_id_fkey FOREIGN KEY (education_program_id) REFERENCES public.t_educational_program(educational_program_id) ON DELETE SET NULL;


--
-- TOC entry 3392 (class 2606 OID 17548)
-- Name: t_practice t_practice_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_practice
    ADD CONSTRAINT t_practice_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON DELETE CASCADE;


--
-- TOC entry 3393 (class 2606 OID 17553)
-- Name: t_practice_result t_practice_result_passing_practice_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_practice_result
    ADD CONSTRAINT t_practice_result_passing_practice_id_fkey FOREIGN KEY (passing_practice_id) REFERENCES public.t_passing_practice(passing_practice_id) ON DELETE CASCADE;


--
-- TOC entry 3394 (class 2606 OID 17558)
-- Name: t_practice_result t_practice_result_student_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_practice_result
    ADD CONSTRAINT t_practice_result_student_id_fkey FOREIGN KEY (student_id) REFERENCES public.t_student(strudent_id) ON DELETE CASCADE;


--
-- TOC entry 3395 (class 2606 OID 17563)
-- Name: t_qxee_activity_employer t_qxee_activity_employer_activity_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_activity_employer
    ADD CONSTRAINT t_qxee_activity_employer_activity_id_fkey FOREIGN KEY (activity_id) REFERENCES public.t_activity(activity_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3396 (class 2606 OID 17568)
-- Name: t_qxee_activity_employer t_qxee_activity_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_activity_employer
    ADD CONSTRAINT t_qxee_activity_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3397 (class 2606 OID 17573)
-- Name: t_qxee_collaboration_employer t_qxee_collaboration_employer_collaboration_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_collaboration_employer
    ADD CONSTRAINT t_qxee_collaboration_employer_collaboration_id_fkey FOREIGN KEY (collaboration_id) REFERENCES public.t_collaboration(collaboration_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3398 (class 2606 OID 17578)
-- Name: t_qxee_collaboration_employer t_qxee_collaboration_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_collaboration_employer
    ADD CONSTRAINT t_qxee_collaboration_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON DELETE CASCADE;


--
-- TOC entry 3399 (class 2606 OID 17583)
-- Name: t_qxee_employer_result_education t_qxee_employer_result_education_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_employer_result_education
    ADD CONSTRAINT t_qxee_employer_result_education_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3400 (class 2606 OID 17588)
-- Name: t_qxee_employer_result_education t_qxee_employer_result_education_result_discipline_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_employer_result_education
    ADD CONSTRAINT t_qxee_employer_result_education_result_discipline_id_fkey FOREIGN KEY (result_discipline_id) REFERENCES public.t_result_discipline(result_discipline_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3401 (class 2606 OID 17593)
-- Name: t_qxee_practice_employer t_qxee_practice_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_practice_employer
    ADD CONSTRAINT t_qxee_practice_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3402 (class 2606 OID 17598)
-- Name: t_qxee_practice_employer t_qxee_practice_employer_practice_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_practice_employer
    ADD CONSTRAINT t_qxee_practice_employer_practice_id_fkey FOREIGN KEY (practice_id) REFERENCES public.t_practice(practice_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3403 (class 2606 OID 17603)
-- Name: t_qxee_task_employer t_qxee_task_employer_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_task_employer
    ADD CONSTRAINT t_qxee_task_employer_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3404 (class 2606 OID 17608)
-- Name: t_qxee_task_employer t_qxee_task_employer_task_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_qxee_task_employer
    ADD CONSTRAINT t_qxee_task_employer_task_id_fkey FOREIGN KEY (task_id) REFERENCES public.t_task(task_id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 3405 (class 2606 OID 17613)
-- Name: t_report t_report_head_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_head_employer_id_fkey FOREIGN KEY (head_employer_id) REFERENCES public.t_head_employer(head_employer_id) ON DELETE CASCADE;


--
-- TOC entry 3406 (class 2606 OID 17618)
-- Name: t_report t_report_head_university_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_head_university_id_fkey FOREIGN KEY (head_university_id) REFERENCES public.t_head_university(head_university_id) ON DELETE CASCADE;


--
-- TOC entry 3407 (class 2606 OID 17623)
-- Name: t_report t_report_passing_practice_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_passing_practice_id_fkey FOREIGN KEY (passing_practice_id) REFERENCES public.t_passing_practice(passing_practice_id) ON DELETE CASCADE;


--
-- TOC entry 3408 (class 2606 OID 17628)
-- Name: t_report t_report_practice_result_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_practice_result_fkey FOREIGN KEY (practice_result) REFERENCES public.t_practice_result(practice_result_id) ON DELETE SET NULL;


--
-- TOC entry 3409 (class 2606 OID 17633)
-- Name: t_report t_report_student_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_report
    ADD CONSTRAINT t_report_student_id_fkey FOREIGN KEY (student_id) REFERENCES public.t_student(strudent_id) ON DELETE CASCADE;


--
-- TOC entry 3410 (class 2606 OID 17638)
-- Name: t_result_discipline t_result_discipline_discipline_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_result_discipline
    ADD CONSTRAINT t_result_discipline_discipline_id_fkey FOREIGN KEY (discipline_id) REFERENCES public.t_discipline(discipline_id) ON DELETE CASCADE;


--
-- TOC entry 3411 (class 2606 OID 17643)
-- Name: t_result_discipline t_result_discipline_educational_program_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_result_discipline
    ADD CONSTRAINT t_result_discipline_educational_program_id_fkey FOREIGN KEY (educational_program_id) REFERENCES public.t_educational_program(educational_program_id) ON DELETE CASCADE;


--
-- TOC entry 3412 (class 2606 OID 17648)
-- Name: t_student t_student_education_program_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_student
    ADD CONSTRAINT t_student_education_program_id_fkey FOREIGN KEY (education_program_id) REFERENCES public.t_educational_program(educational_program_id) ON DELETE SET NULL;


--
-- TOC entry 3413 (class 2606 OID 17653)
-- Name: t_student t_student_group_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_student
    ADD CONSTRAINT t_student_group_id_fkey FOREIGN KEY (group_id) REFERENCES public.t_group(group_id) ON DELETE SET NULL;


--
-- TOC entry 3414 (class 2606 OID 17658)
-- Name: t_student t_student_person_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_student
    ADD CONSTRAINT t_student_person_id_fkey FOREIGN KEY (person_id) REFERENCES public.t_person(person_id) ON DELETE CASCADE;


--
-- TOC entry 3415 (class 2606 OID 17663)
-- Name: t_test_practice t_test_practice_employer_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_test_practice
    ADD CONSTRAINT t_test_practice_employer_id_fkey FOREIGN KEY (employer_id) REFERENCES public.t_employer(employer_id) ON DELETE CASCADE;


--
-- TOC entry 3416 (class 2606 OID 17668)
-- Name: t_test_practice t_test_practice_practice_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: -
--

ALTER TABLE ONLY public.t_test_practice
    ADD CONSTRAINT t_test_practice_practice_id_fkey FOREIGN KEY (practice_id) REFERENCES public.t_practice(practice_id) ON DELETE CASCADE;


-- Completed on 2023-10-12 22:20:08 +07

--
-- PostgreSQL database dump complete
--

