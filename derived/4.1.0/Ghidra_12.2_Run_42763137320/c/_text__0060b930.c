/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060b930; name: FUN_.text__0060b930
 */


undefined8
FUN__text__0060b930(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  short *psVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_70 [8];
  long local_68;
  
  FUN__text__0060e76c(auStack_70,param_3);
  puVar9 = (undefined8 *)FUN__text__0060e7f8(auStack_70);
  pcVar1 = (char *)(local_68 + 0xd8);
  uVar10 = FUN__text__0060e994(auStack_70,pcVar1);
  do {
    if ((uVar10 & 1) == 0) {
      uVar17 = 0;
LAB__text__0060be0c:
      FUN__text__0060e79c(auStack_70);
      return uVar17;
    }
    if (*pcVar1 == '\x04') {
      memset(param_1,0,0x148);
      *param_1 = *(undefined4 *)(puVar9 + 1);
      bVar5 = *(byte *)((long)puVar9 + 0xc);
      *(undefined2 *)((long)param_1 + 6) = 0;
      *(ushort *)(param_1 + 1) = (bVar5 & 1) << 2;
      psVar11 = (short *)FUN__text__00641578(param_1);
      puVar12 = (undefined8 *)FUN__text__006415a0(param_1);
      puVar13 = (undefined8 *)FUN__text__006415c8(param_1);
      puVar14 = (undefined8 *)FUN__text__006415f0(param_1);
      uVar7 = psVar11[7];
      *psVar11 = *(short *)((long)puVar9 + 0xd);
      psVar11[1] = *(short *)((long)puVar9 + 0xc2);
      *(undefined4 *)(psVar11 + 2) = *(undefined4 *)((long)puVar9 + 0xf);
      *(undefined4 *)(psVar11 + 4) = *(undefined4 *)((long)puVar9 + 0x13);
      psVar11[6] = *(short *)(pcVar1 + 0x2f);
      bVar5 = pcVar1[0x31];
      psVar11[7] = uVar7 & 0xfffe | bVar5 & 1;
      uVar2 = bVar5 & 1 | ((byte)pcVar1[0x31] >> 1 & 1) << 1;
      psVar11[7] = uVar7 & 0xfffc | uVar2;
      uVar2 = uVar2 | ((byte)pcVar1[0x31] >> 2 & 1) << 2;
      psVar11[7] = uVar7 & 0xfff8 | uVar2;
      bVar5 = *(byte *)(psVar11 + 0xd);
      psVar11[7] = uVar7 & 0xffe0 | uVar2 | (*(byte *)((long)puVar9 + 0x17) & 1) << 3;
      psVar11[8] = *(short *)(puVar9 + 3);
      *(undefined4 *)(psVar11 + 10) = *(undefined4 *)((long)puVar9 + 0x1a);
      *(undefined1 *)(psVar11 + 0xc) = *(undefined1 *)((long)puVar9 + 0x1e);
      *(undefined1 *)((long)psVar11 + 0x19) = *(undefined1 *)((long)puVar9 + 0x1f);
      bVar6 = *(byte *)(puVar9 + 4);
      *(byte *)(psVar11 + 0xd) = bVar5 & 0xfe | bVar6 & 1;
      *(byte *)(psVar11 + 0xd) =
           (*(byte *)((long)puVar9 + 0x21) & 3) << 2 | bVar5 & 0xf2 | bVar6 & 1;
      psVar11[0xe] = *(short *)((long)puVar9 + 0x22);
      *(undefined1 *)(psVar11 + 0xf) = *(undefined1 *)((long)puVar9 + 0x24);
      *(undefined1 *)((long)psVar11 + 0x1f) = *(undefined1 *)((long)puVar9 + 0x25);
      *(undefined1 *)(psVar11 + 0x10) = *(undefined1 *)((long)puVar9 + 0x26);
      *(undefined1 *)((long)psVar11 + 0x21) = *(undefined1 *)((long)puVar9 + 0x27);
      *(undefined1 *)(psVar11 + 0x11) = *(undefined1 *)(puVar9 + 5);
      *(undefined1 *)((long)psVar11 + 0x23) = *(undefined1 *)((long)puVar9 + 0x29);
      *(undefined1 *)(psVar11 + 0x12) = *(undefined1 *)((long)puVar9 + 0x2a);
      *(undefined1 *)((long)psVar11 + 0x25) = *(undefined1 *)((long)puVar9 + 0x2b);
      *(undefined1 *)(psVar11 + 0x13) = *(undefined1 *)((long)puVar9 + 0x2c);
      *(undefined1 *)((long)psVar11 + 0x27) = *(undefined1 *)((long)puVar9 + 0x2d);
      *(undefined1 *)(psVar11 + 0x14) = *(undefined1 *)((long)puVar9 + 0x2e);
      *(undefined1 *)((long)psVar11 + 0x29) = *(undefined1 *)((long)puVar9 + 0x2f);
      *(char *)(psVar11 + 0x15) = pcVar1[0x2e];
      *(undefined4 *)(psVar11 + 0x16) = *(undefined4 *)(puVar9 + 6);
      *(undefined4 *)(psVar11 + 0x18) = *(undefined4 *)((long)puVar9 + 0x34);
      *(undefined1 *)(psVar11 + 0x1a) = *(undefined1 *)(puVar9 + 7);
      *(undefined1 *)((long)psVar11 + 0x35) = *(undefined1 *)((long)puVar9 + 0x39);
      *(undefined4 *)(psVar11 + 0x1c) = *(undefined4 *)((long)puVar9 + 0x3a);
      *(undefined4 *)(psVar11 + 0x1e) = *(undefined4 *)((long)puVar9 + 0x3e);
      *(uint *)(psVar11 + 0x20) = *(uint *)(psVar11 + 0x20) & 0xffffff00;
      *(undefined1 *)(psVar11 + 0x24) = *(undefined1 *)((long)puVar9 + 0x42);
      *(undefined1 *)((long)psVar11 + 0x49) = *(undefined1 *)((long)puVar9 + 0x43);
      uVar17 = *(undefined8 *)((long)puVar9 + 0x44);
      uVar15 = *(undefined8 *)((long)puVar9 + 0x4c);
      uVar16 = *(undefined8 *)((long)puVar9 + 0x54);
      *(undefined2 *)(puVar12 + 3) = *(undefined2 *)((long)puVar9 + 0x5c);
      *puVar12 = uVar17;
      puVar12[1] = uVar15;
      puVar12[2] = uVar16;
      *(undefined8 *)((long)puVar12 + 0x1a) = *(undefined8 *)(pcVar1 + 3);
      *(undefined4 *)((long)puVar12 + 0x22) = *(undefined4 *)(pcVar1 + 0xb);
      *(undefined4 *)((long)puVar12 + 0x26) = *(undefined4 *)(pcVar1 + 0xf);
      uVar4 = *(uint *)((long)puVar12 + 0x34);
      *(undefined8 *)((long)puVar12 + 0x2a) = *(undefined8 *)(pcVar1 + 0x13);
      bVar5 = *(byte *)(puVar9 + 0xc);
      *(uint *)((long)puVar12 + 0x34) = uVar4 & 0xffffffe0 | bVar5 & 0x1f;
      uVar3 = bVar5 & 0x1f | (*(byte *)((long)puVar9 + 0x61) & 0x1f) << 5;
      *(uint *)((long)puVar12 + 0x34) = uVar4 & 0xfffffc00 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar9 + 0x62) & 0x1f) << 10;
      *(uint *)((long)puVar12 + 0x34) = uVar4 & 0xffff8000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar9 + 99) & 0x1f) << 0xf;
      *(uint *)((long)puVar12 + 0x34) = uVar4 & 0xfff00000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar9 + 100) & 0x1f) << 0x14;
      *(uint *)((long)puVar12 + 0x34) = uVar4 & 0xfe000000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar9 + 0x65) & 0x1f) << 0x19;
      *(uint *)((long)puVar12 + 0x34) = uVar4 & 0xc0000000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar9 + 0x66) & 1) << 0x1e;
      *(uint *)((long)puVar12 + 0x34) = uVar4 & 0x80000000 | uVar3;
      bVar5 = *(byte *)((long)puVar9 + 0x67);
      *(undefined1 *)(puVar12 + 7) = 0;
      *(undefined4 *)(puVar12 + 8) = 0;
      *(uint *)((long)puVar12 + 0x34) = uVar3 | (uint)bVar5 << 0x1f;
      *(undefined2 *)((long)puVar12 + 0x32) = *(undefined2 *)((long)puVar9 + 0x5e);
      *(undefined4 *)((long)puVar12 + 0x3c) = *(undefined4 *)(puVar9 + 0xd);
      uVar17 = *(undefined8 *)((long)puVar9 + 0x6c);
      uVar15 = *(undefined8 *)((long)puVar9 + 0x74);
      uVar16 = *(undefined8 *)((long)puVar9 + 0x7c);
      *(undefined2 *)(puVar13 + 3) = *(undefined2 *)((long)puVar9 + 0x84);
      *puVar13 = uVar17;
      puVar13[1] = uVar15;
      puVar13[2] = uVar16;
      *(undefined1 *)((long)puVar13 + 0x1a) = *(undefined1 *)((long)puVar9 + 0x86);
      *(undefined1 *)((long)puVar13 + 0x1b) = *(undefined1 *)((long)puVar9 + 0x87);
      *(undefined1 *)((long)puVar13 + 0x1c) = *(undefined1 *)(puVar9 + 0x11);
      *(undefined2 *)((long)puVar13 + 0x1e) = *(undefined2 *)((long)puVar9 + 0x89);
      *(undefined1 *)(puVar13 + 4) = *(undefined1 *)((long)puVar9 + 0x8b);
      *(undefined1 *)((long)puVar13 + 0x21) = *(undefined1 *)((long)puVar9 + 0x8c);
      *(undefined1 *)((long)puVar13 + 0x22) = *(undefined1 *)((long)puVar9 + 0x8d);
      *(undefined1 *)((long)puVar13 + 0x23) = *(undefined1 *)((long)puVar9 + 0x8e);
      uVar8 = *(undefined2 *)((long)puVar9 + 0x8f);
      *(undefined8 *)((long)puVar13 + 0x26) = 0;
      *(undefined8 *)((long)puVar13 + 0x2e) = 0;
      *(undefined2 *)((long)puVar13 + 0x24) = uVar8;
      *(undefined1 *)((long)puVar13 + 0x36) = *(undefined1 *)((long)puVar9 + 0x91);
      *(undefined1 *)((long)puVar13 + 0x37) = *(undefined1 *)((long)puVar9 + 0x92);
      *(undefined1 *)((long)puVar13 + 0x3a) = *(undefined1 *)((long)puVar9 + 0x93);
      *(undefined4 *)((long)puVar13 + 0x3c) = *(undefined4 *)((long)puVar9 + 0x94);
      *(undefined1 *)(puVar13 + 8) = *(undefined1 *)(puVar9 + 0x13);
      uVar17 = *(undefined8 *)((long)puVar9 + 0x99);
      uVar15 = *(undefined8 *)((long)puVar9 + 0xa1);
      uVar16 = *(undefined8 *)((long)puVar9 + 0xa9);
      *(undefined2 *)(puVar14 + 3) = *(undefined2 *)((long)puVar9 + 0xb1);
      puVar14[1] = uVar15;
      puVar14[2] = uVar16;
      *puVar14 = uVar17;
      *(undefined1 *)((long)puVar14 + 0x1a) = *(undefined1 *)((long)puVar9 + 0xb3);
      *(undefined1 *)((long)puVar14 + 0x1b) = *(undefined1 *)((long)puVar9 + 0xb4);
      *(undefined1 *)((long)puVar14 + 0x1c) = *(undefined1 *)((long)puVar9 + 0xb5);
      *(undefined2 *)((long)puVar14 + 0x1e) = *(undefined2 *)((long)puVar9 + 0xb6);
      *(undefined1 *)(puVar14 + 4) = *(undefined1 *)(puVar9 + 0x17);
      *(undefined1 *)((long)puVar14 + 0x21) = *(undefined1 *)((long)puVar9 + 0xb9);
      *(undefined1 *)((long)puVar14 + 0x22) = *(undefined1 *)((long)puVar9 + 0xba);
      *(undefined1 *)((long)puVar14 + 0x23) = *(undefined1 *)((long)puVar9 + 0xbb);
      *(undefined1 *)((long)puVar14 + 0x24) = *(undefined1 *)((long)puVar9 + 0xbc);
      *(undefined1 *)((long)puVar14 + 0x25) = *(undefined1 *)((long)puVar9 + 0xbd);
      *(undefined1 *)((long)puVar14 + 0x26) = *(undefined1 *)((long)puVar9 + 0xbe);
      uVar8 = FUN__text__0060911c(*(undefined2 *)(pcVar1 + 0x2a));
      *(undefined2 *)(puVar14 + 5) = uVar8;
      uVar8 = FUN__text__0060911c(*(undefined2 *)(pcVar1 + 0x2c));
      *(undefined2 *)((long)puVar14 + 0x2a) = uVar8;
      *(char *)((long)puVar14 + 0x2c) = pcVar1[0x29];
      bVar5 = *(byte *)((long)puVar9 + 0xbf);
      *(byte *)((long)puVar14 + 0x2d) = *(byte *)((long)puVar14 + 0x2d) & 0x80 | bVar5 & 0x7f;
      *(byte *)((long)puVar14 + 0x2d) = bVar5 & 0x7f | *(char *)(puVar9 + 0x18) << 7;
      *(undefined1 *)((long)puVar14 + 0x2e) = *(undefined1 *)((long)puVar9 + 0xc1);
      uVar17 = *(undefined8 *)(pcVar1 + 0x21);
      *(undefined8 *)((long)puVar14 + 0x2f) = *(undefined8 *)(pcVar1 + 0x1b);
      *(undefined8 *)((long)puVar14 + 0x35) = uVar17;
      FUN__text__006090f4((long)puVar14 + 0x3d,*puVar9);
      if (*psVar11 == 0x1df) {
        FUN__text__0060933c(psVar11[0xe],(undefined8 *)((long)puVar12 + 0x1a),
                            (undefined4 *)((long)puVar12 + 0x22),
                            (undefined4 *)((long)puVar12 + 0x26));
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
      uVar17 = 1;
      goto LAB__text__0060be0c;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar10 = FUN__text__0060e994(auStack_70,pcVar1);
  } while( true );
}


