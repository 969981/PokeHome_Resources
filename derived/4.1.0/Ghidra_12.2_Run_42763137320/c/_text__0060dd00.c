/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060dd00; name: FUN_.text__0060dd00
 */


undefined8 FUN__text__0060dd00(undefined8 param_1,undefined4 *param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  undefined8 local_38;
  
  FUN__text__0060e784(auStack_60,param_1);
  FUN__text__0060e804(auStack_60);
  puVar6 = (undefined2 *)FUN__text__0060e7e4(auStack_60);
  puVar7 = (undefined8 *)FUN__text__0060e7f8(auStack_60);
  local_38 = 0;
  local_68 = (undefined1 *)0x0;
  pcVar1 = (char *)(local_58 + 0xd8);
  uVar8 = FUN__text__0060e994(auStack_60,pcVar1);
  do {
    if ((uVar8 & 1) == 0) {
      FUN__text__0060e8b0(auStack_60,&local_38,&local_68,5,0x4a);
      puVar9 = (undefined2 *)FUN__text__0064b000(param_2);
      puVar10 = (undefined8 *)FUN__text__0064b028(param_2);
      puVar11 = (undefined8 *)FUN__text__0064b050(param_2);
      puVar12 = (undefined8 *)FUN__text__0064b078(param_2);
      *(undefined8 *)(puVar6 + 1) = 0;
      *puVar6 = 4;
      *(undefined4 *)(puVar6 + 5) = 0;
      uVar13 = FUN__text__006090ec((long)puVar12 + 0x2f);
      *puVar7 = uVar13;
      *(undefined4 *)(puVar7 + 1) = *param_2;
      *(byte *)((long)puVar7 + 0xc) = *(byte *)(param_2 + 1) >> 2 & 1;
      uVar5 = FUN__text__005fdad0(*puVar9);
      *(undefined2 *)((long)puVar7 + 0xd) = uVar5;
      *(undefined4 *)((long)puVar7 + 0xf) = *(undefined4 *)(puVar9 + 2);
      *(undefined4 *)((long)puVar7 + 0x13) = *(undefined4 *)(puVar9 + 4);
      *(undefined2 *)((long)puVar7 + 0xc2) = puVar9[1];
      *(byte *)((long)puVar7 + 0x17) = *(byte *)(puVar9 + 7) >> 3 & 1;
      *(undefined2 *)(puVar7 + 3) = puVar9[8];
      *(undefined4 *)((long)puVar7 + 0x1a) = *(undefined4 *)(puVar9 + 10);
      *(undefined1 *)((long)puVar7 + 0x1e) = *(undefined1 *)(puVar9 + 0xc);
      *(undefined1 *)((long)puVar7 + 0x1f) = *(undefined1 *)((long)puVar9 + 0x19);
      *(byte *)(puVar7 + 4) = *(byte *)(puVar9 + 0xd) & 1;
      *(byte *)((long)puVar7 + 0x21) = *(byte *)(puVar9 + 0xd) >> 1 & 3;
      *(undefined2 *)((long)puVar7 + 0x22) = puVar9[0xe];
      *(undefined1 *)((long)puVar7 + 0x24) = *(undefined1 *)(puVar9 + 0xf);
      *(undefined1 *)((long)puVar7 + 0x25) = *(undefined1 *)((long)puVar9 + 0x1f);
      *(undefined1 *)((long)puVar7 + 0x26) = *(undefined1 *)(puVar9 + 0x10);
      *(undefined1 *)((long)puVar7 + 0x27) = *(undefined1 *)((long)puVar9 + 0x21);
      *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar9 + 0x11);
      *(undefined1 *)((long)puVar7 + 0x29) = *(undefined1 *)((long)puVar9 + 0x23);
      *(undefined1 *)((long)puVar7 + 0x2a) = *(undefined1 *)(puVar9 + 0x12);
      *(undefined1 *)((long)puVar7 + 0x2b) = *(undefined1 *)((long)puVar9 + 0x25);
      *(undefined1 *)((long)puVar7 + 0x2c) = *(undefined1 *)(puVar9 + 0x13);
      *(undefined1 *)((long)puVar7 + 0x2d) = *(undefined1 *)((long)puVar9 + 0x27);
      *(undefined1 *)((long)puVar7 + 0x2e) = *(undefined1 *)(puVar9 + 0x14);
      *(undefined1 *)((long)puVar7 + 0x2f) = *(undefined1 *)((long)puVar9 + 0x29);
      *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar9 + 0x16);
      *(undefined4 *)((long)puVar7 + 0x34) = *(undefined4 *)(puVar9 + 0x18);
      *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(puVar9 + 0x1a);
      *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)puVar9 + 0x35);
      *(undefined4 *)((long)puVar7 + 0x3a) = *(undefined4 *)(puVar9 + 0x1c);
      *(undefined4 *)((long)puVar7 + 0x3e) = *(undefined4 *)(puVar9 + 0x1e);
      uVar8 = FUN__text__0060931c(*(undefined1 *)((long)puVar11 + 0x26));
      lVar2 = 0x42;
      if ((uVar8 & 1) == 0) {
        lVar2 = 0x40;
      }
      *(undefined1 *)((long)puVar7 + 0x42) = *(undefined1 *)((long)puVar9 + lVar2);
      *(undefined1 *)((long)puVar7 + 0x43) = *(undefined1 *)((long)puVar9 + 0x41);
      uVar13 = *puVar10;
      uVar14 = puVar10[1];
      uVar15 = puVar10[2];
      *(undefined2 *)((long)puVar7 + 0x5c) = *(undefined2 *)(puVar10 + 3);
      *(undefined8 *)((long)puVar7 + 0x54) = uVar15;
      *(undefined8 *)((long)puVar7 + 0x4c) = uVar14;
      *(undefined8 *)((long)puVar7 + 0x44) = uVar13;
      *(undefined2 *)((long)puVar7 + 0x5e) = *(undefined2 *)((long)puVar10 + 0x32);
      *(byte *)(puVar7 + 0xc) = *(byte *)((long)puVar10 + 0x34) & 0x1f;
      *(byte *)((long)puVar7 + 0x61) = (byte)(*(uint *)((long)puVar10 + 0x34) >> 5) & 0x1f;
      *(byte *)((long)puVar7 + 0x62) = (byte)(*(uint *)((long)puVar10 + 0x34) >> 10) & 0x1f;
      *(byte *)((long)puVar7 + 99) = (byte)(*(uint *)((long)puVar10 + 0x34) >> 0xf) & 0x1f;
      *(byte *)((long)puVar7 + 100) = (byte)(*(uint *)((long)puVar10 + 0x34) >> 0x14) & 0x1f;
      *(byte *)((long)puVar7 + 0x65) =
           (byte)((uint)*(undefined4 *)((long)puVar10 + 0x34) >> 0x19) & 0x1f;
      *(byte *)((long)puVar7 + 0x66) =
           (byte)((uint)*(undefined4 *)((long)puVar10 + 0x34) >> 0x1e) & 1;
      *(byte *)((long)puVar7 + 0x67) = (byte)((uint)*(undefined4 *)((long)puVar10 + 0x34) >> 0x1f);
      *(undefined4 *)(puVar7 + 0xd) = *(undefined4 *)(puVar10 + 7);
      uVar13 = *puVar11;
      uVar14 = puVar11[1];
      uVar15 = puVar11[2];
      *(undefined2 *)((long)puVar7 + 0x84) = *(undefined2 *)(puVar11 + 3);
      *(undefined8 *)((long)puVar7 + 0x7c) = uVar15;
      *(undefined8 *)((long)puVar7 + 0x74) = uVar14;
      *(undefined8 *)((long)puVar7 + 0x6c) = uVar13;
      *(undefined1 *)((long)puVar7 + 0x86) = *(undefined1 *)((long)puVar11 + 0x1a);
      *(undefined1 *)((long)puVar7 + 0x87) = *(undefined1 *)((long)puVar11 + 0x1b);
      *(undefined1 *)(puVar7 + 0x11) = *(undefined1 *)((long)puVar11 + 0x1c);
      *(undefined2 *)((long)puVar7 + 0x89) = *(undefined2 *)((long)puVar11 + 0x1e);
      *(undefined1 *)((long)puVar7 + 0x8b) = *(undefined1 *)(puVar11 + 4);
      *(undefined1 *)((long)puVar7 + 0x8c) = *(undefined1 *)((long)puVar11 + 0x21);
      *(undefined1 *)((long)puVar7 + 0x8d) = *(undefined1 *)((long)puVar11 + 0x22);
      *(undefined1 *)((long)puVar7 + 0x8e) = *(undefined1 *)((long)puVar11 + 0x23);
      *(undefined2 *)((long)puVar7 + 0x8f) = *(undefined2 *)((long)puVar11 + 0x24);
      *(undefined1 *)((long)puVar7 + 0x91) = *(undefined1 *)((long)puVar11 + 0x26);
      *(undefined1 *)((long)puVar7 + 0x92) = *(undefined1 *)((long)puVar11 + 0x27);
      *(undefined1 *)((long)puVar7 + 0x93) = *(undefined1 *)((long)puVar11 + 0x2d);
      *(undefined4 *)((long)puVar7 + 0x94) = *(undefined4 *)(puVar11 + 5);
      *(undefined1 *)(puVar7 + 0x13) = *(undefined1 *)((long)puVar11 + 0x2c);
      uVar13 = *puVar12;
      uVar14 = puVar12[1];
      uVar15 = puVar12[2];
      *(undefined2 *)((long)puVar7 + 0xb1) = *(undefined2 *)(puVar12 + 3);
      *(undefined8 *)((long)puVar7 + 0xa9) = uVar15;
      *(undefined8 *)((long)puVar7 + 0xa1) = uVar14;
      *(undefined8 *)((long)puVar7 + 0x99) = uVar13;
      *(undefined1 *)((long)puVar7 + 0xb3) = *(undefined1 *)((long)puVar12 + 0x1a);
      *(undefined1 *)((long)puVar7 + 0xb4) = *(undefined1 *)((long)puVar12 + 0x1b);
      *(undefined1 *)((long)puVar7 + 0xb5) = *(undefined1 *)((long)puVar12 + 0x1c);
      *(undefined2 *)((long)puVar7 + 0xb6) = *(undefined2 *)((long)puVar12 + 0x1e);
      *(undefined1 *)(puVar7 + 0x17) = *(undefined1 *)(puVar12 + 4);
      *(undefined1 *)((long)puVar7 + 0xb9) = *(undefined1 *)((long)puVar12 + 0x21);
      *(undefined1 *)((long)puVar7 + 0xba) = *(undefined1 *)((long)puVar12 + 0x22);
      *(undefined1 *)((long)puVar7 + 0xbb) = *(undefined1 *)((long)puVar12 + 0x23);
      *(undefined1 *)((long)puVar7 + 0xbc) = *(undefined1 *)((long)puVar12 + 0x24);
      *(undefined1 *)((long)puVar7 + 0xbd) = *(undefined1 *)((long)puVar12 + 0x25);
      *(undefined1 *)((long)puVar7 + 0xbe) = *(undefined1 *)((long)puVar12 + 0x26);
      *(byte *)((long)puVar7 + 0xbf) = *(byte *)((long)puVar12 + 0x2d) & 0x7f;
      *(byte *)(puVar7 + 0x18) = *(byte *)((long)puVar12 + 0x2d) >> 7;
      *(undefined1 *)((long)puVar7 + 0xc1) = *(undefined1 *)((long)puVar12 + 0x2e);
      uVar13 = 1;
      *local_68 = *(undefined1 *)(puVar9 + 0x21);
      *(undefined8 *)(local_68 + 1) = *(undefined8 *)((long)puVar10 + 0x1a);
      *(undefined4 *)(local_68 + 9) = *(undefined4 *)((long)puVar10 + 0x22);
      *(undefined4 *)(local_68 + 0xd) = *(undefined4 *)((long)puVar10 + 0x26);
      *(undefined8 *)(local_68 + 0x11) = *(undefined8 *)((long)puVar10 + 0x2a);
      local_68[0x19] = *(undefined1 *)((long)puVar10 + 0x3c);
      local_68[0x1a] = *(undefined1 *)((long)puVar10 + 0x3d);
      uVar14 = *(undefined8 *)((long)puVar12 + 0x37);
      uVar15 = *(undefined8 *)((long)puVar12 + 0x3f);
      uVar16 = *(undefined8 *)((long)puVar12 + 0x47);
      local_68[0x38] = *(undefined1 *)((long)puVar12 + 0x4f);
      *(undefined8 *)(local_68 + 0x28) = uVar15;
      *(undefined8 *)(local_68 + 0x30) = uVar16;
      *(undefined8 *)(local_68 + 0x20) = uVar14;
      uVar14 = *(undefined8 *)(puVar9 + 0x24);
      *(undefined8 *)(local_68 + 0x3d) = *(undefined8 *)((long)puVar9 + 0x43);
      *(undefined8 *)(local_68 + 0x42) = uVar14;
      bVar3 = local_68[0x3c];
      local_68[0x1b] = *(undefined1 *)((long)puVar12 + 0x2c);
      *(undefined2 *)(local_68 + 0x1c) = *(undefined2 *)(puVar12 + 5);
      *(undefined2 *)(local_68 + 0x1e) = *(undefined2 *)((long)puVar12 + 0x2a);
      local_68[0x39] = *(undefined1 *)((long)puVar12 + 0x27);
      *(undefined2 *)(local_68 + 0x3a) = puVar9[6];
      bVar4 = *(byte *)(puVar9 + 7);
      local_68[0x3c] = bVar3 & 0xfe | bVar4 & 1;
      bVar4 = bVar4 & 1 | (*(byte *)(puVar9 + 7) >> 1 & 1) << 1;
      local_68[0x3c] = bVar3 & 0xfc | bVar4;
      local_68[0x3c] = bVar3 & 0xf8 | bVar4 | *(byte *)(puVar9 + 7) & 4;
LAB__text__0060e1bc:
      FUN__text__0060e79c(auStack_60);
      return uVar13;
    }
    if (*pcVar1 == '\x05') {
      uVar13 = 0;
      goto LAB__text__0060e1bc;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar8 = FUN__text__0060e994(auStack_60,pcVar1);
  } while( true );
}


