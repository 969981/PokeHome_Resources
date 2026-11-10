/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060cd30; name: FUN_.text__0060cd30
 */


undefined8
FUN__text__0060cd30(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined2 *puVar20;
  undefined8 *puVar21;
  undefined1 auStack_70 [8];
  long local_68;
  
  FUN__text__0060e76c(auStack_70,param_3);
  puVar11 = (undefined8 *)FUN__text__0060e7f8(auStack_70);
  pcVar1 = (char *)(local_68 + 0xd8);
  uVar12 = FUN__text__0060e994(auStack_70,pcVar1);
  do {
    if ((uVar12 & 1) == 0) {
      uVar19 = 0;
LAB__text__0060d228:
      FUN__text__0060e79c(auStack_70);
      return uVar19;
    }
    if (*pcVar1 == '\a') {
      memset(param_1,0,0x148);
      *param_1 = *(undefined4 *)(puVar11 + 1);
      bVar5 = *(byte *)((long)puVar11 + 0xc);
      *(undefined2 *)((long)param_1 + 6) = 0;
      *(ushort *)(param_1 + 1) = (bVar5 & 1) << 2;
      puVar13 = (undefined2 *)FUN__text__0064570c(param_1);
      puVar14 = (undefined8 *)FUN__text__00645734(param_1);
      puVar15 = (undefined8 *)FUN__text__0064575c(param_1);
      puVar16 = (undefined8 *)FUN__text__00645784(param_1);
      uVar9 = FUN__text__005fdb18(*(undefined2 *)((long)puVar11 + 0xd));
      *puVar13 = uVar9;
      uVar8 = puVar13[7];
      puVar13[1] = *(undefined2 *)((long)puVar11 + 0xc2);
      *(undefined4 *)(puVar13 + 2) = *(undefined4 *)((long)puVar11 + 0xf);
      *(undefined4 *)(puVar13 + 4) = *(undefined4 *)((long)puVar11 + 0x13);
      puVar13[6] = *(undefined2 *)(pcVar1 + 0x40);
      bVar5 = pcVar1[0x42];
      puVar13[7] = uVar8 & 0xfffe | bVar5 & 1;
      uVar2 = bVar5 & 1 | ((byte)pcVar1[0x42] >> 1 & 1) << 1;
      puVar13[7] = uVar8 & 0xfffc | uVar2;
      uVar2 = uVar2 | ((byte)pcVar1[0x42] >> 2 & 1) << 2;
      puVar13[7] = uVar8 & 0xfff8 | uVar2;
      bVar5 = *(byte *)(puVar13 + 0xd);
      puVar13[7] = uVar8 & 0xfff0 | uVar2 | (*(byte *)((long)puVar11 + 0x17) & 1) << 3;
      puVar13[8] = *(undefined2 *)(puVar11 + 3);
      *(undefined4 *)(puVar13 + 10) = *(undefined4 *)((long)puVar11 + 0x1a);
      *(undefined1 *)(puVar13 + 0xc) = *(undefined1 *)((long)puVar11 + 0x1e);
      *(undefined1 *)((long)puVar13 + 0x19) = *(undefined1 *)((long)puVar11 + 0x1f);
      bVar6 = *(byte *)(puVar11 + 4);
      *(byte *)(puVar13 + 0xd) = bVar5 & 0xfe | bVar6 & 1;
      *(byte *)(puVar13 + 0xd) =
           (*(byte *)((long)puVar11 + 0x21) & 3) << 1 | bVar5 & 0xf8 | bVar6 & 1;
      *(char *)((long)puVar13 + 0x1b) = pcVar1[0xc];
      puVar20 = puVar13 + 0xe;
      *puVar20 = *(undefined2 *)((long)puVar11 + 0x22);
      *(undefined1 *)(puVar13 + 0xf) = *(undefined1 *)((long)puVar11 + 0x24);
      *(undefined1 *)((long)puVar13 + 0x1f) = *(undefined1 *)((long)puVar11 + 0x25);
      *(undefined1 *)(puVar13 + 0x10) = *(undefined1 *)((long)puVar11 + 0x26);
      *(undefined1 *)((long)puVar13 + 0x21) = *(undefined1 *)((long)puVar11 + 0x27);
      *(undefined1 *)(puVar13 + 0x11) = *(undefined1 *)(puVar11 + 5);
      *(undefined1 *)((long)puVar13 + 0x23) = *(undefined1 *)((long)puVar11 + 0x29);
      *(undefined1 *)(puVar13 + 0x12) = *(undefined1 *)((long)puVar11 + 0x2a);
      *(undefined1 *)((long)puVar13 + 0x25) = *(undefined1 *)((long)puVar11 + 0x2b);
      *(undefined1 *)(puVar13 + 0x13) = *(undefined1 *)((long)puVar11 + 0x2c);
      *(undefined1 *)((long)puVar13 + 0x27) = *(undefined1 *)((long)puVar11 + 0x2d);
      *(undefined1 *)(puVar13 + 0x14) = *(undefined1 *)((long)puVar11 + 0x2e);
      *(undefined1 *)((long)puVar13 + 0x29) = *(undefined1 *)((long)puVar11 + 0x2f);
      *(undefined4 *)(puVar13 + 0x16) = *(undefined4 *)(puVar11 + 6);
      *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)((long)puVar11 + 0x34);
      *(undefined1 *)(puVar13 + 0x1a) = *(undefined1 *)(puVar11 + 7);
      *(undefined1 *)((long)puVar13 + 0x35) = *(undefined1 *)((long)puVar11 + 0x39);
      *(undefined4 *)(puVar13 + 0x1c) = *(undefined4 *)((long)puVar11 + 0x3a);
      *(undefined4 *)(puVar13 + 0x1e) = *(undefined4 *)((long)puVar11 + 0x3e);
      *(undefined1 *)(puVar13 + 0x20) = *(undefined1 *)((long)puVar11 + 0x42);
      *(undefined1 *)((long)puVar13 + 0x41) = *(undefined1 *)((long)puVar11 + 0x43);
      cVar7 = pcVar1[3];
      *(undefined1 *)((long)puVar13 + 0x43) = 0;
      *(char *)(puVar13 + 0x21) = cVar7;
      uVar19 = *(undefined8 *)((long)puVar11 + 0x44);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x4c);
      uVar18 = *(undefined8 *)((long)puVar11 + 0x54);
      *(undefined2 *)(puVar14 + 3) = *(undefined2 *)((long)puVar11 + 0x5c);
      puVar14[1] = uVar17;
      puVar14[2] = uVar18;
      *puVar14 = uVar19;
      uVar4 = *(uint *)((long)puVar14 + 0x34);
      puVar21 = (undefined8 *)((long)puVar14 + 0x1a);
      *puVar21 = *(undefined8 *)(pcVar1 + 4);
      bVar5 = *(byte *)(puVar11 + 0xc);
      *(uint *)((long)puVar14 + 0x34) = uVar4 & 0xffffffe0 | bVar5 & 0x1f;
      uVar3 = bVar5 & 0x1f | (*(byte *)((long)puVar11 + 0x61) & 0x1f) << 5;
      *(uint *)((long)puVar14 + 0x34) = uVar4 & 0xfffffc00 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar11 + 0x62) & 0x1f) << 10;
      *(uint *)((long)puVar14 + 0x34) = uVar4 & 0xffff8000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar11 + 99) & 0x1f) << 0xf;
      *(uint *)((long)puVar14 + 0x34) = uVar4 & 0xfff00000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar11 + 100) & 0x1f) << 0x14;
      *(uint *)((long)puVar14 + 0x34) = uVar4 & 0xfe000000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar11 + 0x65) & 0x1f) << 0x19;
      *(uint *)((long)puVar14 + 0x34) = uVar4 & 0xc0000000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar11 + 0x66) & 1) << 0x1e;
      *(uint *)((long)puVar14 + 0x34) = uVar4 & 0x80000000 | uVar3;
      *(uint *)((long)puVar14 + 0x34) = uVar3 | (uint)*(byte *)((long)puVar11 + 0x67) << 0x1f;
      *(undefined2 *)((long)puVar14 + 0x32) = *(undefined2 *)((long)puVar11 + 0x5e);
      *(undefined4 *)(puVar14 + 7) = *(undefined4 *)(puVar11 + 0xd);
      uVar19 = *(undefined8 *)(pcVar1 + 0xd);
      *(undefined4 *)((long)puVar14 + 0x44) = *(undefined4 *)(pcVar1 + 0x15);
      *(undefined8 *)((long)puVar14 + 0x3c) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar11 + 0x6c);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x74);
      uVar18 = *(undefined8 *)((long)puVar11 + 0x7c);
      *(undefined2 *)(puVar15 + 3) = *(undefined2 *)((long)puVar11 + 0x84);
      puVar15[1] = uVar17;
      puVar15[2] = uVar18;
      *puVar15 = uVar19;
      *(undefined1 *)((long)puVar15 + 0x1a) = *(undefined1 *)((long)puVar11 + 0x86);
      *(undefined1 *)((long)puVar15 + 0x1b) = *(undefined1 *)((long)puVar11 + 0x87);
      *(undefined1 *)((long)puVar15 + 0x1c) = *(undefined1 *)(puVar11 + 0x11);
      *(undefined2 *)((long)puVar15 + 0x1e) = *(undefined2 *)((long)puVar11 + 0x89);
      *(undefined1 *)(puVar15 + 4) = *(undefined1 *)((long)puVar11 + 0x8b);
      *(undefined1 *)((long)puVar15 + 0x21) = *(undefined1 *)((long)puVar11 + 0x8c);
      *(undefined1 *)((long)puVar15 + 0x22) = *(undefined1 *)((long)puVar11 + 0x8d);
      *(undefined1 *)((long)puVar15 + 0x23) = *(undefined1 *)((long)puVar11 + 0x8e);
      *(undefined2 *)((long)puVar15 + 0x24) = *(undefined2 *)((long)puVar11 + 0x8f);
      *(undefined1 *)((long)puVar15 + 0x26) = *(undefined1 *)((long)puVar11 + 0x91);
      *(undefined1 *)((long)puVar15 + 0x27) = *(undefined1 *)((long)puVar11 + 0x92);
      *(undefined1 *)((long)puVar15 + 0x2d) = *(undefined1 *)((long)puVar11 + 0x93);
      *(undefined4 *)(puVar15 + 5) = *(undefined4 *)((long)puVar11 + 0x94);
      *(undefined1 *)((long)puVar15 + 0x2c) = *(undefined1 *)(puVar11 + 0x13);
      *(undefined8 *)((long)puVar15 + 0x2e) = *(undefined8 *)(pcVar1 + 0x19);
      uVar19 = *(undefined8 *)(pcVar1 + 0x21);
      uVar17 = *(undefined8 *)(pcVar1 + 0x29);
      uVar18 = *(undefined8 *)(pcVar1 + 0x31);
      *(char *)((long)puVar15 + 0x4e) = pcVar1[0x39];
      *(undefined8 *)((long)puVar15 + 0x46) = uVar18;
      *(undefined8 *)((long)puVar15 + 0x3e) = uVar17;
      *(undefined8 *)((long)puVar15 + 0x36) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar11 + 0x99);
      uVar17 = *(undefined8 *)((long)puVar11 + 0xa1);
      uVar18 = *(undefined8 *)((long)puVar11 + 0xa9);
      *(undefined2 *)(puVar16 + 3) = *(undefined2 *)((long)puVar11 + 0xb1);
      *puVar16 = uVar19;
      puVar16[1] = uVar17;
      puVar16[2] = uVar18;
      *(undefined1 *)((long)puVar16 + 0x1a) = *(undefined1 *)((long)puVar11 + 0xb3);
      *(undefined1 *)((long)puVar16 + 0x1b) = *(undefined1 *)((long)puVar11 + 0xb4);
      *(undefined1 *)((long)puVar16 + 0x1c) = *(undefined1 *)((long)puVar11 + 0xb5);
      *(undefined2 *)((long)puVar16 + 0x1e) = *(undefined2 *)((long)puVar11 + 0xb6);
      *(undefined1 *)(puVar16 + 4) = *(undefined1 *)(puVar11 + 0x17);
      *(undefined1 *)((long)puVar16 + 0x21) = *(undefined1 *)((long)puVar11 + 0xb9);
      *(undefined1 *)((long)puVar16 + 0x22) = *(undefined1 *)((long)puVar11 + 0xba);
      *(undefined1 *)((long)puVar16 + 0x23) = *(undefined1 *)((long)puVar11 + 0xbb);
      *(undefined1 *)((long)puVar16 + 0x24) = *(undefined1 *)((long)puVar11 + 0xbc);
      *(undefined1 *)((long)puVar16 + 0x25) = *(undefined1 *)((long)puVar11 + 0xbd);
      *(undefined1 *)((long)puVar16 + 0x26) = *(undefined1 *)((long)puVar11 + 0xbe);
      *(char *)((long)puVar16 + 0x27) = pcVar1[0x3f];
      *(undefined2 *)(puVar16 + 5) = *(undefined2 *)(pcVar1 + 0x3b);
      *(undefined2 *)((long)puVar16 + 0x2a) = *(undefined2 *)(pcVar1 + 0x3d);
      *(char *)((long)puVar16 + 0x2c) = pcVar1[0x3a];
      bVar5 = *(byte *)((long)puVar11 + 0xbf);
      *(byte *)((long)puVar16 + 0x2d) = *(byte *)((long)puVar16 + 0x2d) & 0x80 | bVar5 & 0x7f;
      *(byte *)((long)puVar16 + 0x2d) = bVar5 & 0x7f | *(char *)(puVar11 + 0x18) << 7;
      *(undefined1 *)((long)puVar16 + 0x2e) = *(undefined1 *)((long)puVar11 + 0xc1);
      FUN__text__006090f4((long)puVar16 + 0x2f,*puVar11);
      iVar10 = FUN__text__005fdad0(*puVar13);
      if (iVar10 == 0x1df) {
        FUN__text__0060933c(*puVar20,puVar21,(long)puVar14 + 0x22,(long)puVar14 + 0x26);
        iVar10 = FUN__text__005fdad0(*puVar13);
      }
      else {
        iVar10 = FUN__text__005fdad0(*puVar13);
      }
      if (iVar10 == 0x287) {
        FUN__text__0060a400(puVar20,puVar21);
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
      uVar19 = 1;
      goto LAB__text__0060d228;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar12 = FUN__text__0060e994(auStack_70,pcVar1);
  } while( true );
}


