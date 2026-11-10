/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060aa70; name: FUN_.text__0060aa70
 */


undefined8
FUN__text__0060aa70(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  FUN__text__0060e784(auStack_60,param_1);
  FUN__text__0060e804(auStack_60);
  puVar6 = (undefined2 *)FUN__text__0060e7e4(auStack_60);
  puVar7 = (undefined8 *)FUN__text__0060e7f8(auStack_60);
  pcVar1 = (char *)(local_58 + 0xd8);
  local_70 = (undefined1 *)0x0;
  uStack_68 = 0;
  uVar8 = FUN__text__0060e994(auStack_60,pcVar1);
  do {
    if ((uVar8 & 1) == 0) {
      FUN__text__0060e8b0(auStack_60,&uStack_68,&local_70,1,0x3f);
      puVar9 = (undefined2 *)FUN__text__0063fb10(param_2);
      puVar10 = (undefined8 *)FUN__text__0063fb38(param_2);
      puVar11 = (undefined8 *)FUN__text__0063fb60(param_2);
      puVar12 = (undefined8 *)FUN__text__0063fb88(param_2);
      *(undefined8 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar6 + 5) = 0;
      *puVar6 = 4;
      *puVar7 = param_4;
      *(undefined4 *)(puVar7 + 1) = *param_2;
      *(byte *)((long)puVar7 + 0xc) = *(byte *)(param_2 + 1) >> 2 & 1;
      *(undefined2 *)((long)puVar7 + 0xd) = *puVar9;
      *(undefined4 *)((long)puVar7 + 0xf) = *(undefined4 *)(puVar9 + 2);
      *(undefined4 *)((long)puVar7 + 0x13) = *(undefined4 *)(puVar9 + 4);
      *(undefined2 *)((long)puVar7 + 0xc2) = puVar9[1];
      *(byte *)((long)puVar7 + 0x17) = *(byte *)((long)puVar9 + 0xd) >> 3 & 1;
      *(undefined2 *)(puVar7 + 3) = puVar9[7];
      *(undefined4 *)((long)puVar7 + 0x1a) = *(undefined4 *)(puVar9 + 8);
      *(undefined1 *)((long)puVar7 + 0x1e) = *(undefined1 *)(puVar9 + 10);
      *(undefined1 *)((long)puVar7 + 0x1f) = *(undefined1 *)(puVar9 + 10);
      *(byte *)(puVar7 + 4) = *(byte *)((long)puVar9 + 0x15) & 1;
      *(byte *)((long)puVar7 + 0x21) = *(byte *)((long)puVar9 + 0x15) >> 1 & 3;
      *(ushort *)((long)puVar7 + 0x22) = (ushort)(*(byte *)((long)puVar9 + 0x15) >> 3);
      *(undefined1 *)((long)puVar7 + 0x24) = *(undefined1 *)(puVar9 + 0xb);
      *(undefined1 *)((long)puVar7 + 0x25) = *(undefined1 *)((long)puVar9 + 0x17);
      *(undefined1 *)((long)puVar7 + 0x26) = *(undefined1 *)(puVar9 + 0xc);
      *(undefined1 *)((long)puVar7 + 0x27) = *(undefined1 *)((long)puVar9 + 0x19);
      *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar9 + 0xd);
      uVar4 = *(undefined1 *)((long)puVar9 + 0x1b);
      *(undefined2 *)((long)puVar7 + 0x2e) = 0;
      *(undefined4 *)((long)puVar7 + 0x2a) = 0;
      *(undefined1 *)((long)puVar7 + 0x29) = uVar4;
      *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar9 + 0x14);
      *(undefined4 *)((long)puVar7 + 0x34) = *(undefined4 *)(puVar9 + 0x16);
      *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(puVar9 + 0x18);
      uVar4 = *(undefined1 *)((long)puVar9 + 0x31);
      *(undefined8 *)((long)puVar7 + 0x3a) = 0;
      *(undefined1 *)((long)puVar7 + 0x39) = uVar4;
      *(undefined1 *)((long)puVar7 + 0x42) = *(undefined1 *)(puVar9 + 0x19);
      *(undefined1 *)((long)puVar7 + 0x43) = *(undefined1 *)((long)puVar9 + 0x33);
      uVar15 = puVar10[2];
      uVar16 = *puVar10;
      uVar3 = puVar10[1];
      *(undefined2 *)((long)puVar7 + 0x5c) = *(undefined2 *)(puVar10 + 3);
      *(undefined8 *)((long)puVar7 + 0x54) = uVar15;
      *(undefined8 *)((long)puVar7 + 0x4c) = uVar3;
      *(undefined8 *)((long)puVar7 + 0x44) = uVar16;
      if (param_3 == (undefined4 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined2 *)(param_3 + 2);
      }
      *(undefined2 *)((long)puVar7 + 0x5e) = uVar13;
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
      if (param_3 == (undefined4 *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *param_3;
      }
      *(undefined4 *)(puVar7 + 0xd) = uVar14;
      uVar16 = *puVar11;
      uVar3 = puVar11[1];
      uVar15 = puVar11[2];
      *(undefined2 *)((long)puVar7 + 0x84) = *(undefined2 *)(puVar11 + 3);
      *(undefined8 *)((long)puVar7 + 0x7c) = uVar15;
      *(undefined8 *)((long)puVar7 + 0x74) = uVar3;
      *(undefined8 *)((long)puVar7 + 0x6c) = uVar16;
      uVar4 = *(undefined1 *)((long)puVar11 + 0x1a);
      *(undefined1 *)((long)puVar7 + 0x87) = 0;
      *(undefined1 *)((long)puVar7 + 0x86) = uVar4;
      *(undefined1 *)(puVar7 + 0x11) = *(undefined1 *)((long)puVar11 + 0x1b);
      *(undefined2 *)((long)puVar7 + 0x89) = *(undefined2 *)((long)puVar11 + 0x26);
      *(undefined1 *)((long)puVar7 + 0x8b) = *(undefined1 *)((long)puVar11 + 0x2a);
      *(undefined1 *)((long)puVar7 + 0x8c) = *(undefined1 *)((long)puVar11 + 0x2c);
      *(undefined1 *)((long)puVar7 + 0x8d) = *(undefined1 *)((long)puVar11 + 0x2d);
      *(undefined1 *)((long)puVar7 + 0x8e) = *(undefined1 *)((long)puVar11 + 0x2e);
      *(undefined2 *)((long)puVar7 + 0x8f) = *(undefined2 *)(puVar11 + 6);
      uVar4 = *(undefined1 *)((long)puVar12 + 0x2f);
      *(undefined1 *)((long)puVar7 + 0x92) = 0;
      *(undefined1 *)((long)puVar7 + 0x91) = uVar4;
      *(undefined1 *)((long)puVar7 + 0x93) = *(undefined1 *)((long)puVar12 + 0x33);
      *(undefined4 *)((long)puVar7 + 0x94) = *(undefined4 *)(puVar9 + 0x1a);
      *(undefined1 *)(puVar7 + 0x13) = 0xff;
      uVar15 = puVar12[2];
      uVar16 = *puVar12;
      uVar3 = puVar12[1];
      *(undefined2 *)((long)puVar7 + 0xb1) = *(undefined2 *)(puVar12 + 3);
      *(undefined8 *)((long)puVar7 + 0xa9) = uVar15;
      *(undefined8 *)((long)puVar7 + 0xa1) = uVar3;
      *(undefined8 *)((long)puVar7 + 0x99) = uVar16;
      uVar4 = *(undefined1 *)((long)puVar12 + 0x1a);
      *(undefined1 *)(puVar7 + 0x17) = 0;
      *(undefined4 *)((long)puVar7 + 0xb4) = 0;
      *(undefined1 *)((long)puVar7 + 0xb3) = uVar4;
      *(undefined1 *)((long)puVar7 + 0xb9) = *(undefined1 *)((long)puVar12 + 0x21);
      *(undefined1 *)((long)puVar7 + 0xba) = *(undefined1 *)((long)puVar12 + 0x22);
      *(undefined1 *)((long)puVar7 + 0xbb) = *(undefined1 *)((long)puVar12 + 0x23);
      *(undefined1 *)((long)puVar7 + 0xbc) = *(undefined1 *)((long)puVar12 + 0x24);
      *(undefined1 *)((long)puVar7 + 0xbd) = *(undefined1 *)((long)puVar12 + 0x25);
      *(undefined1 *)((long)puVar7 + 0xbe) = *(undefined1 *)((long)puVar12 + 0x26);
      *(byte *)((long)puVar7 + 0xbf) = *(byte *)((long)puVar12 + 0x2d) & 0x7f;
      *(byte *)(puVar7 + 0x18) = *(byte *)((long)puVar12 + 0x2d) >> 7;
      *(undefined1 *)((long)puVar7 + 0xc1) = *(undefined1 *)((long)puVar12 + 0x2e);
      *local_70 = *(undefined1 *)(puVar9 + 0xe);
      local_70[1] = *(undefined1 *)((long)puVar9 + 0x1d);
      local_70[2] = *(undefined1 *)(puVar9 + 0xf);
      local_70[3] = *(undefined1 *)((long)puVar9 + 0x1f);
      local_70[4] = *(undefined1 *)(puVar9 + 0x10);
      local_70[5] = *(undefined1 *)((long)puVar9 + 0x21);
      local_70[6] = *(undefined1 *)(puVar9 + 0x11);
      *(undefined8 *)(local_70 + 7) = *(undefined8 *)((long)puVar10 + 0x1a);
      *(undefined4 *)(local_70 + 0xf) = *(undefined4 *)((long)puVar10 + 0x22);
      bVar5 = local_70[0x3e];
      *(undefined4 *)(local_70 + 0x13) = *(undefined4 *)((long)puVar10 + 0x26);
      *(undefined8 *)(local_70 + 0x17) = *(undefined8 *)((long)puVar10 + 0x2a);
      *(undefined4 *)(local_70 + 0x1f) = *(undefined4 *)(puVar9 + 0x12);
      *(undefined4 *)(local_70 + 0x23) = *(undefined4 *)((long)puVar12 + 0x34);
      local_70[0x27] = *(undefined1 *)((long)puVar11 + 0x34);
      local_70[0x28] = *(undefined1 *)((long)puVar11 + 0x35);
      local_70[0x29] = *(undefined1 *)((long)puVar11 + 0x36);
      local_70[0x2a] = *(undefined1 *)((long)puVar12 + 0x27);
      local_70[0x2b] = *(undefined1 *)((long)puVar12 + 0x1b);
      local_70[0x2c] = *(undefined1 *)((long)puVar12 + 0x1c);
      local_70[0x2d] = *(undefined1 *)((long)puVar12 + 0x1d);
      local_70[0x2e] = *(undefined1 *)((long)puVar12 + 0x1e);
      local_70[0x2f] = *(undefined1 *)((long)puVar12 + 0x1f);
      local_70[0x30] = *(undefined1 *)(puVar12 + 4);
      local_70[0x31] = *(undefined1 *)((long)puVar11 + 0x37);
      *(undefined4 *)(local_70 + 0x32) = *(undefined4 *)((long)puVar11 + 0x1c);
      local_70[0x36] = *(undefined1 *)((long)puVar12 + 0x2c);
      *(undefined2 *)(local_70 + 0x37) = *(undefined2 *)(puVar12 + 5);
      *(undefined2 *)(local_70 + 0x39) = *(undefined2 *)((long)puVar12 + 0x2a);
      local_70[0x3b] = *(undefined1 *)((long)puVar9 + 0x23);
      *(ushort *)(local_70 + 0x3c) = (ushort)*(byte *)(puVar9 + 6);
      bVar2 = *(byte *)((long)puVar9 + 0xd) & 1;
      local_70[0x3e] = bVar5 & 0xfe | bVar2;
      bVar2 = bVar2 | (*(byte *)((long)puVar9 + 0xd) >> 1 & 1) << 1;
      local_70[0x3e] = bVar5 & 0xfc | bVar2;
      uVar16 = 1;
      local_70[0x3e] = bVar5 & 0xf8 | bVar2 | *(byte *)((long)puVar9 + 0xd) & 4;
LAB__text__0060af48:
      FUN__text__0060e79c(auStack_60);
      return uVar16;
    }
    if (*pcVar1 == '\x01') {
      uVar16 = 0;
      goto LAB__text__0060af48;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar8 = FUN__text__0060e994(auStack_60,pcVar1);
  } while( true );
}


