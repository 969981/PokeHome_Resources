/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060d780; name: FUN_.text__0060d780
 */


undefined8
FUN__text__0060d780(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  short sVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  short *psVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined1 auStack_70 [8];
  long local_68;
  
  FUN__text__0060e76c(auStack_70,param_3);
  puVar12 = (undefined8 *)FUN__text__0060e7f8(auStack_70);
  pcVar1 = (char *)(local_68 + 0xd8);
  uVar13 = FUN__text__0060e994(auStack_70,pcVar1);
  do {
    if ((uVar13 & 1) == 0) {
      uVar20 = 0;
LAB__text__0060dcac:
      FUN__text__0060e79c(auStack_70);
      return uVar20;
    }
    if (*pcVar1 == '\x02') {
      memset(param_1,0,0x148);
      *param_1 = *(undefined4 *)(puVar12 + 1);
      bVar5 = *(byte *)((long)puVar12 + 0xc);
      *(undefined2 *)((long)param_1 + 6) = 0;
      *(ushort *)(param_1 + 1) = (bVar5 & 1) << 2;
      psVar14 = (short *)FUN__text__00649754(param_1);
      puVar15 = (undefined8 *)FUN__text__0064977c(param_1);
      puVar16 = (undefined8 *)FUN__text__006497a4(param_1);
      puVar17 = (undefined8 *)FUN__text__006497cc(param_1);
      uVar8 = psVar14[7];
      *psVar14 = *(short *)((long)puVar12 + 0xd);
      psVar14[1] = *(short *)((long)puVar12 + 0xc2);
      *(undefined4 *)(psVar14 + 2) = *(undefined4 *)((long)puVar12 + 0xf);
      *(undefined4 *)(psVar14 + 4) = *(undefined4 *)((long)puVar12 + 0x13);
      psVar14[6] = *(short *)(pcVar1 + 0x48);
      bVar5 = pcVar1[0x4a];
      psVar14[7] = uVar8 & 0xfffe | bVar5 & 1;
      uVar2 = bVar5 & 1 | ((byte)pcVar1[0x4a] >> 1 & 1) << 1;
      psVar14[7] = uVar8 & 0xfffc | uVar2;
      uVar2 = uVar2 | ((byte)pcVar1[0x4a] >> 2 & 1) << 2;
      psVar14[7] = uVar8 & 0xfff8 | uVar2;
      uVar2 = uVar2 | (*(byte *)((long)puVar12 + 0x17) & 1) << 3;
      psVar14[7] = uVar8 & 0xfff0 | uVar2;
      bVar5 = *(byte *)(psVar14 + 0xd);
      psVar14[7] = uVar8 & 0xffe0 | uVar2 | ((byte)pcVar1[3] & 1) << 4;
      psVar14[8] = *(short *)(puVar12 + 3);
      *(undefined4 *)(psVar14 + 10) = *(undefined4 *)((long)puVar12 + 0x1a);
      *(undefined1 *)(psVar14 + 0xc) = *(undefined1 *)((long)puVar12 + 0x1e);
      *(undefined1 *)((long)psVar14 + 0x19) = *(undefined1 *)((long)puVar12 + 0x1f);
      bVar6 = *(byte *)(puVar12 + 4);
      *(byte *)(psVar14 + 0xd) = bVar5 & 0xfe | bVar6 & 1;
      *(byte *)(psVar14 + 0xd) =
           (*(byte *)((long)puVar12 + 0x21) & 3) << 2 | bVar5 & 0xf2 | bVar6 & 1;
      psVar14[0xe] = *(short *)((long)puVar12 + 0x22);
      *(undefined1 *)(psVar14 + 0xf) = *(undefined1 *)((long)puVar12 + 0x24);
      *(undefined1 *)((long)psVar14 + 0x1f) = *(undefined1 *)((long)puVar12 + 0x25);
      *(undefined1 *)(psVar14 + 0x10) = *(undefined1 *)((long)puVar12 + 0x26);
      *(undefined1 *)((long)psVar14 + 0x21) = *(undefined1 *)((long)puVar12 + 0x27);
      *(undefined1 *)(psVar14 + 0x11) = *(undefined1 *)(puVar12 + 5);
      *(undefined1 *)((long)psVar14 + 0x23) = *(undefined1 *)((long)puVar12 + 0x29);
      *(undefined1 *)(psVar14 + 0x12) = *(undefined1 *)((long)puVar12 + 0x2a);
      *(undefined1 *)((long)psVar14 + 0x25) = *(undefined1 *)((long)puVar12 + 0x2b);
      *(undefined1 *)(psVar14 + 0x13) = *(undefined1 *)((long)puVar12 + 0x2c);
      *(undefined1 *)((long)psVar14 + 0x27) = *(undefined1 *)((long)puVar12 + 0x2d);
      *(undefined1 *)(psVar14 + 0x14) = *(undefined1 *)((long)puVar12 + 0x2e);
      *(undefined1 *)((long)psVar14 + 0x29) = *(undefined1 *)((long)puVar12 + 0x2f);
      *(char *)(psVar14 + 0x15) = pcVar1[0x47];
      *(undefined4 *)(psVar14 + 0x16) = *(undefined4 *)(puVar12 + 6);
      *(undefined4 *)(psVar14 + 0x18) = *(undefined4 *)((long)puVar12 + 0x34);
      *(undefined1 *)(psVar14 + 0x1a) = *(undefined1 *)(puVar12 + 7);
      *(undefined1 *)((long)psVar14 + 0x35) = *(undefined1 *)((long)puVar12 + 0x39);
      *(undefined4 *)(psVar14 + 0x1c) = *(undefined4 *)((long)puVar12 + 0x3a);
      *(undefined4 *)(psVar14 + 0x1e) = *(undefined4 *)((long)puVar12 + 0x3e);
      *(char *)(psVar14 + 0x20) = (char)*(undefined4 *)(pcVar1 + 4);
      *(undefined1 *)(psVar14 + 0x24) = *(undefined1 *)((long)puVar12 + 0x42);
      *(undefined1 *)((long)psVar14 + 0x49) = *(undefined1 *)((long)puVar12 + 0x43);
      uVar20 = *(undefined8 *)((long)puVar12 + 0x44);
      uVar18 = *(undefined8 *)((long)puVar12 + 0x4c);
      uVar19 = *(undefined8 *)((long)puVar12 + 0x54);
      *(undefined2 *)(puVar15 + 3) = *(undefined2 *)((long)puVar12 + 0x5c);
      *puVar15 = uVar20;
      puVar15[1] = uVar18;
      puVar15[2] = uVar19;
      puVar21 = (undefined8 *)((long)puVar15 + 0x1a);
      *puVar21 = *(undefined8 *)(pcVar1 + 8);
      *(undefined4 *)((long)puVar15 + 0x22) = *(undefined4 *)(pcVar1 + 0x10);
      *(undefined4 *)((long)puVar15 + 0x26) = *(undefined4 *)(pcVar1 + 0x14);
      uVar4 = *(uint *)((long)puVar15 + 0x34);
      *(undefined8 *)((long)puVar15 + 0x2a) = *(undefined8 *)(pcVar1 + 0x18);
      bVar5 = *(byte *)(puVar12 + 0xc);
      *(uint *)((long)puVar15 + 0x34) = uVar4 & 0xffffffe0 | bVar5 & 0x1f;
      uVar3 = bVar5 & 0x1f | (*(byte *)((long)puVar12 + 0x61) & 0x1f) << 5;
      *(uint *)((long)puVar15 + 0x34) = uVar4 & 0xfffffc00 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar12 + 0x62) & 0x1f) << 10;
      *(uint *)((long)puVar15 + 0x34) = uVar4 & 0xffff8000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar12 + 99) & 0x1f) << 0xf;
      *(uint *)((long)puVar15 + 0x34) = uVar4 & 0xfff00000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar12 + 100) & 0x1f) << 0x14;
      *(uint *)((long)puVar15 + 0x34) = uVar4 & 0xfe000000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar12 + 0x65) & 0x1f) << 0x19;
      *(uint *)((long)puVar15 + 0x34) = uVar4 & 0xc0000000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar12 + 0x66) & 1) << 0x1e;
      *(uint *)((long)puVar15 + 0x34) = uVar4 & 0x80000000 | uVar3;
      *(uint *)((long)puVar15 + 0x34) = uVar3 | (uint)*(byte *)((long)puVar12 + 0x67) << 0x1f;
      *(char *)(puVar15 + 7) = pcVar1[0x20];
      *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(pcVar1 + 0x3e);
      *(undefined2 *)((long)puVar15 + 0x32) = *(undefined2 *)((long)puVar12 + 0x5e);
      *(undefined4 *)((long)puVar15 + 0x3c) = *(undefined4 *)(puVar12 + 0xd);
      uVar20 = *(undefined8 *)((long)puVar12 + 0x6c);
      uVar18 = *(undefined8 *)((long)puVar12 + 0x74);
      uVar19 = *(undefined8 *)((long)puVar12 + 0x7c);
      *(undefined2 *)(puVar16 + 3) = *(undefined2 *)((long)puVar12 + 0x84);
      puVar16[1] = uVar18;
      puVar16[2] = uVar19;
      *puVar16 = uVar20;
      *(undefined1 *)((long)puVar16 + 0x1a) = *(undefined1 *)((long)puVar12 + 0x86);
      *(undefined1 *)((long)puVar16 + 0x1b) = *(undefined1 *)((long)puVar12 + 0x87);
      *(undefined1 *)((long)puVar16 + 0x1c) = *(undefined1 *)(puVar12 + 0x11);
      *(undefined2 *)((long)puVar16 + 0x1e) = *(undefined2 *)((long)puVar12 + 0x89);
      *(undefined1 *)(puVar16 + 4) = *(undefined1 *)((long)puVar12 + 0x8b);
      *(undefined1 *)((long)puVar16 + 0x21) = *(undefined1 *)((long)puVar12 + 0x8c);
      *(undefined1 *)((long)puVar16 + 0x22) = *(undefined1 *)((long)puVar12 + 0x8d);
      *(undefined1 *)((long)puVar16 + 0x23) = *(undefined1 *)((long)puVar12 + 0x8e);
      *(undefined2 *)((long)puVar16 + 0x24) = *(undefined2 *)((long)puVar12 + 0x8f);
      uVar20 = *(undefined8 *)(pcVar1 + 0x21);
      *(undefined8 *)((long)puVar16 + 0x2c) = *(undefined8 *)(pcVar1 + 0x27);
      *(undefined8 *)((long)puVar16 + 0x26) = uVar20;
      cVar7 = pcVar1[0x2f];
      *(undefined1 *)((long)puVar16 + 0x35) = 0;
      *(char *)((long)puVar16 + 0x34) = cVar7;
      uVar10 = FUN__text__00609210(*(undefined1 *)((long)puVar12 + 0x91));
      *(undefined1 *)((long)puVar16 + 0x36) = uVar10;
      *(undefined1 *)((long)puVar16 + 0x37) = *(undefined1 *)((long)puVar12 + 0x92);
      *(undefined1 *)((long)puVar16 + 0x3a) = *(undefined1 *)((long)puVar12 + 0x93);
      *(undefined4 *)((long)puVar16 + 0x3c) = *(undefined4 *)((long)puVar12 + 0x94);
      *(undefined1 *)(puVar16 + 8) = *(undefined1 *)(puVar12 + 0x13);
      uVar20 = *(undefined8 *)((long)puVar12 + 0xa1);
      uVar18 = *(undefined8 *)((long)puVar12 + 0xa9);
      uVar19 = *(undefined8 *)((long)puVar12 + 0x99);
      *(undefined2 *)(puVar17 + 3) = *(undefined2 *)((long)puVar12 + 0xb1);
      *puVar17 = uVar19;
      puVar17[1] = uVar20;
      puVar17[2] = uVar18;
      *(undefined1 *)((long)puVar17 + 0x1a) = *(undefined1 *)((long)puVar12 + 0xb3);
      *(undefined1 *)((long)puVar17 + 0x1b) = *(undefined1 *)((long)puVar12 + 0xb4);
      *(undefined1 *)((long)puVar17 + 0x1c) = *(undefined1 *)((long)puVar12 + 0xb5);
      *(undefined2 *)((long)puVar17 + 0x1e) = *(undefined2 *)((long)puVar12 + 0xb6);
      *(undefined1 *)(puVar17 + 4) = *(undefined1 *)(puVar12 + 0x17);
      *(undefined1 *)((long)puVar17 + 0x21) = *(undefined1 *)((long)puVar12 + 0xb9);
      *(undefined1 *)((long)puVar17 + 0x22) = *(undefined1 *)((long)puVar12 + 0xba);
      *(undefined1 *)((long)puVar17 + 0x23) = *(undefined1 *)((long)puVar12 + 0xbb);
      *(undefined1 *)((long)puVar17 + 0x24) = *(undefined1 *)((long)puVar12 + 0xbc);
      *(undefined1 *)((long)puVar17 + 0x25) = *(undefined1 *)((long)puVar12 + 0xbd);
      *(undefined1 *)((long)puVar17 + 0x26) = *(undefined1 *)((long)puVar12 + 0xbe);
      *(undefined2 *)(puVar17 + 5) = *(undefined2 *)(pcVar1 + 0x43);
      uVar13 = FUN__text__00609138(*(undefined1 *)((long)puVar12 + 0x91));
      uVar11 = *(undefined2 *)(pcVar1 + 0x45);
      if ((uVar13 & 1) != 0) {
        uVar11 = FUN__text__006091bc(uVar11,*(undefined1 *)((long)puVar12 + 0x91));
      }
      *(undefined2 *)((long)puVar17 + 0x2a) = uVar11;
      *(char *)((long)puVar17 + 0x2c) = pcVar1[0x42];
      bVar5 = *(byte *)((long)puVar12 + 0xbf);
      *(byte *)((long)puVar17 + 0x2d) = *(byte *)((long)puVar17 + 0x2d) & 0x80 | bVar5 & 0x7f;
      *(byte *)((long)puVar17 + 0x2d) = bVar5 & 0x7f | *(char *)(puVar12 + 0x18) << 7;
      *(undefined1 *)((long)puVar17 + 0x2e) = *(undefined1 *)((long)puVar12 + 0xc1);
      uVar20 = *(undefined8 *)(pcVar1 + 0x30);
      *(undefined8 *)((long)puVar17 + 0x35) = *(undefined8 *)(pcVar1 + 0x36);
      *(undefined8 *)((long)puVar17 + 0x2f) = uVar20;
      FUN__text__006090f4((long)puVar17 + 0x3d,*puVar12);
      sVar9 = *psVar14;
      if (sVar9 == 0x1df) {
        FUN__text__0060933c(psVar14[0xe],puVar21,(undefined4 *)((long)puVar15 + 0x22),
                            (undefined4 *)((long)puVar15 + 0x26));
        sVar9 = *psVar14;
      }
      if (sVar9 == 0x287) {
        FUN__text__0060a400(psVar14 + 0xe,puVar21);
      }
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)param_2 = *param_4;
        *(undefined2 *)((long)param_2 + 2) = *(undefined2 *)(param_4 + 2);
        *(undefined2 *)((long)param_2 + 4) = *(undefined2 *)(param_4 + 4);
        *(undefined2 *)((long)param_2 + 6) = *(undefined2 *)(param_4 + 6);
        *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_4 + 8);
        *(undefined2 *)((long)param_2 + 10) = *(undefined2 *)(param_4 + 10);
        *(undefined2 *)((long)param_2 + 0xc) = *(undefined2 *)(param_4 + 0xc);
      }
      uVar20 = 1;
      goto LAB__text__0060dcac;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar13 = FUN__text__0060e994(auStack_70,pcVar1);
  } while( true );
}


