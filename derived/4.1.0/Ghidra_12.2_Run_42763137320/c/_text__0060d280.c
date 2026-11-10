/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060d280; name: FUN_.text__0060d280
 */


undefined8 FUN__text__0060d280(undefined8 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  undefined8 local_38;
  
  FUN__text__0060e784(auStack_60,param_1);
  FUN__text__0060e804(auStack_60);
  puVar7 = (undefined2 *)FUN__text__0060e7e4(auStack_60);
  puVar8 = (undefined8 *)FUN__text__0060e7f8(auStack_60);
  local_38 = 0;
  local_68 = (byte *)0x0;
  pcVar1 = (char *)(local_58 + 0xd8);
  uVar9 = FUN__text__0060e994(auStack_60,pcVar1);
  do {
    if ((uVar9 & 1) == 0) {
      FUN__text__0060e8b0(auStack_60,&local_38,&local_68,2,0x48);
      puVar10 = (undefined2 *)FUN__text__00649754(param_2);
      puVar11 = (undefined8 *)FUN__text__0064977c(param_2);
      puVar12 = (undefined8 *)FUN__text__006497a4(param_2);
      puVar13 = (undefined8 *)FUN__text__006497cc(param_2);
      *(undefined8 *)(puVar7 + 1) = 0;
      *puVar7 = 4;
      *(undefined4 *)(puVar7 + 5) = 0;
      uVar14 = FUN__text__006090ec((long)puVar13 + 0x3d);
      *puVar8 = uVar14;
      *(undefined4 *)(puVar8 + 1) = *param_2;
      *(byte *)((long)puVar8 + 0xc) = *(byte *)(param_2 + 1) >> 2 & 1;
      *(undefined2 *)((long)puVar8 + 0xd) = *puVar10;
      *(undefined4 *)((long)puVar8 + 0xf) = *(undefined4 *)(puVar10 + 2);
      *(undefined4 *)((long)puVar8 + 0x13) = *(undefined4 *)(puVar10 + 4);
      *(undefined2 *)((long)puVar8 + 0xc2) = puVar10[1];
      *(byte *)((long)puVar8 + 0x17) = *(byte *)(puVar10 + 7) >> 3 & 1;
      *(undefined2 *)(puVar8 + 3) = puVar10[8];
      *(undefined4 *)((long)puVar8 + 0x1a) = *(undefined4 *)(puVar10 + 10);
      *(undefined1 *)((long)puVar8 + 0x1e) = *(undefined1 *)(puVar10 + 0xc);
      *(undefined1 *)((long)puVar8 + 0x1f) = *(undefined1 *)((long)puVar10 + 0x19);
      *(byte *)(puVar8 + 4) = *(byte *)(puVar10 + 0xd) & 1;
      *(byte *)((long)puVar8 + 0x21) = *(byte *)(puVar10 + 0xd) >> 2 & 3;
      *(undefined2 *)((long)puVar8 + 0x22) = puVar10[0xe];
      *(undefined1 *)((long)puVar8 + 0x24) = *(undefined1 *)(puVar10 + 0xf);
      *(undefined1 *)((long)puVar8 + 0x25) = *(undefined1 *)((long)puVar10 + 0x1f);
      *(undefined1 *)((long)puVar8 + 0x26) = *(undefined1 *)(puVar10 + 0x10);
      *(undefined1 *)((long)puVar8 + 0x27) = *(undefined1 *)((long)puVar10 + 0x21);
      *(undefined1 *)(puVar8 + 5) = *(undefined1 *)(puVar10 + 0x11);
      *(undefined1 *)((long)puVar8 + 0x29) = *(undefined1 *)((long)puVar10 + 0x23);
      *(undefined1 *)((long)puVar8 + 0x2a) = *(undefined1 *)(puVar10 + 0x12);
      *(undefined1 *)((long)puVar8 + 0x2b) = *(undefined1 *)((long)puVar10 + 0x25);
      *(undefined1 *)((long)puVar8 + 0x2c) = *(undefined1 *)(puVar10 + 0x13);
      *(undefined1 *)((long)puVar8 + 0x2d) = *(undefined1 *)((long)puVar10 + 0x27);
      *(undefined1 *)((long)puVar8 + 0x2e) = *(undefined1 *)(puVar10 + 0x14);
      *(undefined1 *)((long)puVar8 + 0x2f) = *(undefined1 *)((long)puVar10 + 0x29);
      *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(puVar10 + 0x16);
      *(undefined4 *)((long)puVar8 + 0x34) = *(undefined4 *)(puVar10 + 0x18);
      *(undefined1 *)(puVar8 + 7) = *(undefined1 *)(puVar10 + 0x1a);
      *(undefined1 *)((long)puVar8 + 0x39) = *(undefined1 *)((long)puVar10 + 0x35);
      *(undefined4 *)((long)puVar8 + 0x3a) = *(undefined4 *)(puVar10 + 0x1c);
      *(undefined4 *)((long)puVar8 + 0x3e) = *(undefined4 *)(puVar10 + 0x1e);
      *(undefined1 *)((long)puVar8 + 0x42) = *(undefined1 *)(puVar10 + 0x24);
      *(undefined1 *)((long)puVar8 + 0x43) = *(undefined1 *)((long)puVar10 + 0x49);
      uVar14 = puVar11[1];
      uVar2 = puVar11[2];
      uVar6 = *(undefined2 *)(puVar11 + 3);
      *(undefined8 *)((long)puVar8 + 0x44) = *puVar11;
      *(undefined2 *)((long)puVar8 + 0x5c) = uVar6;
      *(undefined8 *)((long)puVar8 + 0x54) = uVar2;
      *(undefined8 *)((long)puVar8 + 0x4c) = uVar14;
      *(undefined2 *)((long)puVar8 + 0x5e) = *(undefined2 *)((long)puVar11 + 0x32);
      *(byte *)(puVar8 + 0xc) = *(byte *)((long)puVar11 + 0x34) & 0x1f;
      *(byte *)((long)puVar8 + 0x61) = (byte)(*(uint *)((long)puVar11 + 0x34) >> 5) & 0x1f;
      *(byte *)((long)puVar8 + 0x62) = (byte)(*(uint *)((long)puVar11 + 0x34) >> 10) & 0x1f;
      *(byte *)((long)puVar8 + 99) = (byte)(*(uint *)((long)puVar11 + 0x34) >> 0xf) & 0x1f;
      *(byte *)((long)puVar8 + 100) = (byte)(*(uint *)((long)puVar11 + 0x34) >> 0x14) & 0x1f;
      *(byte *)((long)puVar8 + 0x65) =
           (byte)((uint)*(undefined4 *)((long)puVar11 + 0x34) >> 0x19) & 0x1f;
      *(byte *)((long)puVar8 + 0x66) =
           (byte)((uint)*(undefined4 *)((long)puVar11 + 0x34) >> 0x1e) & 1;
      *(byte *)((long)puVar8 + 0x67) = (byte)((uint)*(undefined4 *)((long)puVar11 + 0x34) >> 0x1f);
      *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)((long)puVar11 + 0x3c);
      uVar14 = *puVar12;
      uVar2 = puVar12[1];
      uVar15 = puVar12[2];
      *(undefined2 *)((long)puVar8 + 0x84) = *(undefined2 *)(puVar12 + 3);
      *(undefined8 *)((long)puVar8 + 0x7c) = uVar15;
      *(undefined8 *)((long)puVar8 + 0x74) = uVar2;
      *(undefined8 *)((long)puVar8 + 0x6c) = uVar14;
      *(undefined1 *)((long)puVar8 + 0x86) = *(undefined1 *)((long)puVar12 + 0x1a);
      *(undefined1 *)((long)puVar8 + 0x87) = *(undefined1 *)((long)puVar12 + 0x1b);
      *(undefined1 *)(puVar8 + 0x11) = *(undefined1 *)((long)puVar12 + 0x1c);
      *(undefined2 *)((long)puVar8 + 0x89) = *(undefined2 *)((long)puVar12 + 0x1e);
      *(undefined1 *)((long)puVar8 + 0x8b) = *(undefined1 *)(puVar12 + 4);
      *(undefined1 *)((long)puVar8 + 0x8c) = *(undefined1 *)((long)puVar12 + 0x21);
      *(undefined1 *)((long)puVar8 + 0x8d) = *(undefined1 *)((long)puVar12 + 0x22);
      *(undefined1 *)((long)puVar8 + 0x8e) = *(undefined1 *)((long)puVar12 + 0x23);
      *(undefined2 *)((long)puVar8 + 0x8f) = *(undefined2 *)((long)puVar12 + 0x24);
      uVar5 = FUN__text__00609250(*(undefined1 *)((long)puVar12 + 0x36),
                                  *(undefined2 *)((long)puVar13 + 0x2a));
      *(undefined1 *)((long)puVar8 + 0x91) = uVar5;
      *(undefined1 *)((long)puVar8 + 0x92) = *(undefined1 *)((long)puVar12 + 0x37);
      *(undefined1 *)((long)puVar8 + 0x93) = *(undefined1 *)((long)puVar12 + 0x3a);
      *(undefined4 *)((long)puVar8 + 0x94) = *(undefined4 *)((long)puVar12 + 0x3c);
      *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(puVar12 + 8);
      uVar14 = puVar13[1];
      uVar2 = puVar13[2];
      uVar6 = *(undefined2 *)(puVar13 + 3);
      *(undefined8 *)((long)puVar8 + 0x99) = *puVar13;
      *(undefined2 *)((long)puVar8 + 0xb1) = uVar6;
      *(undefined8 *)((long)puVar8 + 0xa9) = uVar2;
      *(undefined8 *)((long)puVar8 + 0xa1) = uVar14;
      *(undefined1 *)((long)puVar8 + 0xb3) = *(undefined1 *)((long)puVar13 + 0x1a);
      *(undefined1 *)((long)puVar8 + 0xb4) = *(undefined1 *)((long)puVar13 + 0x1b);
      *(undefined1 *)((long)puVar8 + 0xb5) = *(undefined1 *)((long)puVar13 + 0x1c);
      *(undefined2 *)((long)puVar8 + 0xb6) = *(undefined2 *)((long)puVar13 + 0x1e);
      *(undefined1 *)(puVar8 + 0x17) = *(undefined1 *)(puVar13 + 4);
      *(undefined1 *)((long)puVar8 + 0xb9) = *(undefined1 *)((long)puVar13 + 0x21);
      *(undefined1 *)((long)puVar8 + 0xba) = *(undefined1 *)((long)puVar13 + 0x22);
      *(undefined1 *)((long)puVar8 + 0xbb) = *(undefined1 *)((long)puVar13 + 0x23);
      *(undefined1 *)((long)puVar8 + 0xbc) = *(undefined1 *)((long)puVar13 + 0x24);
      *(undefined1 *)((long)puVar8 + 0xbd) = *(undefined1 *)((long)puVar13 + 0x25);
      *(undefined1 *)((long)puVar8 + 0xbe) = *(undefined1 *)((long)puVar13 + 0x26);
      *(byte *)((long)puVar8 + 0xbf) = *(byte *)((long)puVar13 + 0x2d) & 0x7f;
      *(byte *)(puVar8 + 0x18) = *(byte *)((long)puVar13 + 0x2d) >> 7;
      *(undefined1 *)((long)puVar8 + 0xc1) = *(undefined1 *)((long)puVar13 + 0x2e);
      *local_68 = *(byte *)(puVar10 + 7) >> 4 & 1;
      *(uint *)(local_68 + 1) = (uint)*(byte *)(puVar10 + 0x20);
      *(undefined8 *)(local_68 + 5) = *(undefined8 *)((long)puVar11 + 0x1a);
      *(undefined4 *)(local_68 + 0xd) = *(undefined4 *)((long)puVar11 + 0x22);
      *(undefined4 *)(local_68 + 0x11) = *(undefined4 *)((long)puVar11 + 0x26);
      *(undefined8 *)(local_68 + 0x15) = *(undefined8 *)((long)puVar11 + 0x2a);
      local_68[0x1d] = *(byte *)(puVar11 + 7);
      uVar14 = *(undefined8 *)((long)puVar12 + 0x26);
      *(undefined8 *)(local_68 + 0x24) = *(undefined8 *)((long)puVar12 + 0x2c);
      *(undefined8 *)(local_68 + 0x1e) = uVar14;
      local_68[0x2c] = *(byte *)((long)puVar12 + 0x34);
      uVar14 = *(undefined8 *)((long)puVar13 + 0x2f);
      *(undefined8 *)(local_68 + 0x33) = *(undefined8 *)((long)puVar13 + 0x35);
      *(undefined8 *)(local_68 + 0x2d) = uVar14;
      *(undefined4 *)(local_68 + 0x3b) = *(undefined4 *)(puVar11 + 8);
      local_68[0x3f] = *(byte *)((long)puVar13 + 0x2c);
      *(undefined2 *)(local_68 + 0x40) = *(undefined2 *)(puVar13 + 5);
      uVar9 = FUN__text__00609138(*(undefined1 *)((long)puVar8 + 0x91));
      if ((uVar9 & 1) == 0) {
        uVar6 = *(undefined2 *)((long)puVar13 + 0x2a);
      }
      else {
        uVar6 = FUN__text__00603264();
      }
      uVar14 = 1;
      *(undefined2 *)(local_68 + 0x42) = uVar6;
      bVar3 = local_68[0x47];
      local_68[0x44] = *(byte *)(puVar10 + 0x15);
      *(undefined2 *)(local_68 + 0x45) = puVar10[6];
      bVar4 = *(byte *)(puVar10 + 7);
      local_68[0x47] = bVar3 & 0xfe | bVar4 & 1;
      bVar4 = bVar4 & 1 | (*(byte *)(puVar10 + 7) >> 1 & 1) << 1;
      local_68[0x47] = bVar3 & 0xfc | bVar4;
      local_68[0x47] = bVar3 & 0xf8 | bVar4 | *(byte *)(puVar10 + 7) & 4;
LAB__text__0060d74c:
      FUN__text__0060e79c(auStack_60);
      return uVar14;
    }
    if (*pcVar1 == '\x02') {
      uVar14 = 0;
      goto LAB__text__0060d74c;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar9 = FUN__text__0060e994(auStack_60,pcVar1);
  } while( true );
}


