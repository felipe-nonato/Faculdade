import Head from 'next/head'
import Image from 'next/image'
import React from 'react'
import styles from '../styles/Home.module.css'
import Saudacao from './classeComponent'

export default function Home() {
  return (
    <React.Fragment>
      <Saudacao />
    </React.Fragment>
  )
}
