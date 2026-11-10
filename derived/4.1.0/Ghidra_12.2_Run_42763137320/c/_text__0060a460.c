/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060a460; name: FUN_.text__0060a460
 */


undefined8
FUN__text__0060a460(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined2 local_f4;
  undefined1 auStack_f0 [48];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  FUN__text__0060e784(auStack_60,param_1);
  FUN__text__0060e804(auStack_60);
  puVar12 = (undefined2 *)FUN__text__0060e7e4(auStack_60);
  puVar13 = (undefined8 *)FUN__text__0060e7f8(auStack_60);
  pcVar1 = (char *)(local_58 + 0xd8);
  local_70 = (undefined1 *)0x0;
  uStack_68 = 0;
  uVar14 = FUN__text__0060e994(auStack_60,pcVar1);
  while ((uVar14 & 1) != 0) {
    if (*pcVar1 == '\x02') {
      uVar16 = 0;
      goto LAB__text__0060aa34;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar14 = FUN__text__0060e994(auStack_60,pcVar1);
  }
  FUN__text__0060e8b0(auStack_60,&uStack_68,&local_70,2,0x48);
  puVar15 = (undefined8 *)*param_3;
  local_c0 = *puVar15;
  uStack_b8 = puVar15[1];
  local_a0 = puVar15[4];
  uStack_98 = puVar15[5];
  local_b0 = puVar15[2];
  uStack_a8 = puVar15[3];
  local_80 = puVar15[8];
  uStack_78 = puVar15[9];
  local_90 = puVar15[6];
  uStack_88 = puVar15[7];
  FUN__text__0063e3f4(&local_c0);
  FUN__text__0063dcb4(auStack_f0,&local_c0);
  uVar14 = FUN__text__0063df04(auStack_f0);
  if ((uVar14 & 1) == 0) {
    uVar16 = 1;
  }
  else {
    *(undefined8 *)(puVar12 + 1) = 0;
    *puVar12 = 4;
    *(undefined4 *)(puVar12 + 5) = 0;
    *puVar13 = 0;
    uVar9 = FUN__text__0063def8(auStack_f0);
    *(undefined4 *)(puVar13 + 1) = uVar9;
    uVar5 = FUN__text__0063df44(auStack_f0);
    *(undefined1 *)((long)puVar13 + 0xc) = uVar5;
    uVar8 = FUN__text__0063df80(auStack_f0);
    iVar10 = FUN__text__006029e4(uVar8);
    if (iVar10 == 0) {
      uVar16 = 2;
    }
    else {
      *(short *)((long)puVar13 + 0xd) = (short)iVar10;
      uVar9 = FUN__text__0063df38(auStack_f0);
      *(undefined4 *)((long)puVar13 + 0xf) = uVar9;
      uVar9 = FUN__text__0063df8c(auStack_f0);
      *(undefined4 *)((long)puVar13 + 0x13) = uVar9;
      *(undefined2 *)((long)puVar13 + 0xc2) = 0;
      bVar6 = FUN__text__0063e108(auStack_f0);
      *param_2 = bVar6 & 1;
      *(undefined1 *)((long)puVar13 + 0x17) = 0;
      uVar8 = FUN__text__00603114(auStack_f0);
      *(undefined2 *)(puVar13 + 3) = uVar8;
      uVar9 = FUN__text__0063df38(auStack_f0);
      uVar11 = FUN__text__0063def8(auStack_f0);
      uVar9 = FUN__text__00602edc(uVar9,uVar11);
      *(undefined4 *)((long)puVar13 + 0x1a) = uVar9;
      FUN__text__0063def8(auStack_f0);
      uVar5 = FUN__text__00602bb0();
      *(undefined1 *)((long)puVar13 + 0x1e) = uVar5;
      *(undefined1 *)((long)puVar13 + 0x1f) = uVar5;
      FUN__text__0063df80(auStack_f0);
      bVar6 = FUN__text__006031f8();
      *(byte *)(puVar13 + 4) = bVar6 & 1;
      uVar9 = FUN__text__0063df80(auStack_f0);
      uVar11 = FUN__text__0063def8(auStack_f0);
      uVar5 = FUN__text__00602bcc(uVar9,uVar11);
      *(undefined1 *)((long)puVar13 + 0x21) = uVar5;
      uVar9 = FUN__text__0063df80(auStack_f0);
      uVar11 = FUN__text__0063def8(auStack_f0);
      uVar8 = FUN__text__00602a78(uVar9,uVar11,*(undefined4 *)(param_3 + 1));
      *(undefined2 *)((long)puVar13 + 0x22) = uVar8;
      FUN__text__0063e020(auStack_f0,0);
      uVar5 = FUN__text__00602ba0();
      *(undefined1 *)((long)puVar13 + 0x24) = uVar5;
      FUN__text__0063e020(auStack_f0,1);
      uVar5 = FUN__text__00602ba0();
      *(undefined1 *)((long)puVar13 + 0x25) = uVar5;
      FUN__text__0063e020(auStack_f0,2);
      uVar5 = FUN__text__00602ba0();
      *(undefined1 *)((long)puVar13 + 0x26) = uVar5;
      FUN__text__0063e020(auStack_f0,5);
      uVar5 = FUN__text__00602ba0();
      *(undefined1 *)((long)puVar13 + 0x27) = uVar5;
      FUN__text__0063e020(auStack_f0,3);
      uVar5 = FUN__text__00602ba0();
      *(undefined1 *)(puVar13 + 5) = uVar5;
      FUN__text__0063e020(auStack_f0,4);
      uVar5 = FUN__text__00602ba0();
      *(undefined1 *)((long)puVar13 + 0x29) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,0);
      *(undefined1 *)((long)puVar13 + 0x2a) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,1);
      *(undefined1 *)((long)puVar13 + 0x2b) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,2);
      *(undefined1 *)((long)puVar13 + 0x2c) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,3);
      *(undefined1 *)((long)puVar13 + 0x2d) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,4);
      *(undefined1 *)((long)puVar13 + 0x2e) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,5);
      *(undefined1 *)((long)puVar13 + 0x2f) = uVar5;
      FUN__text__00602f20(&local_104,auStack_f0);
      *(undefined4 *)(puVar13 + 6) = local_104;
      *(undefined4 *)((long)puVar13 + 0x34) = uStack_100;
      *(undefined2 *)(puVar13 + 7) = local_f4;
      *(undefined4 *)((long)puVar13 + 0x3a) = local_fc;
      *(undefined4 *)((long)puVar13 + 0x3e) = uStack_f8;
      uVar5 = FUN__text__00602c24();
      *(undefined1 *)((long)puVar13 + 0x42) = uVar5;
      uVar5 = FUN__text__00602d7c();
      *(undefined1 *)((long)puVar13 + 0x43) = uVar5;
      uVar16 = *(undefined8 *)((long)param_4 + 0xe);
      uVar17 = *(undefined8 *)((long)param_4 + 0x16);
      uVar8 = *(undefined2 *)((long)param_4 + 0x1e);
      *(undefined8 *)((long)puVar13 + 0x44) = *(undefined8 *)((long)param_4 + 6);
      *(undefined2 *)((long)puVar13 + 0x5c) = uVar8;
      *(undefined8 *)((long)puVar13 + 0x54) = uVar17;
      *(undefined8 *)((long)puVar13 + 0x4c) = uVar16;
      *(undefined2 *)((long)puVar13 + 0x5e) = *(undefined2 *)((long)param_4 + 1);
      uVar5 = FUN__text__0063df98(auStack_f0,0);
      *(undefined1 *)(puVar13 + 0xc) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,1);
      *(undefined1 *)((long)puVar13 + 0x61) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,2);
      *(undefined1 *)((long)puVar13 + 0x62) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,5);
      *(undefined1 *)((long)puVar13 + 99) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,3);
      *(undefined1 *)((long)puVar13 + 100) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,4);
      *(undefined1 *)((long)puVar13 + 0x65) = uVar5;
      uVar5 = FUN__text__0063df54(auStack_f0);
      *(undefined1 *)((long)puVar13 + 0x66) = uVar5;
      uVar5 = *(undefined1 *)param_4;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      puVar13[0xd] = 0;
      *(undefined1 *)(puVar13 + 0x12) = 0;
      *(undefined1 *)((long)puVar13 + 0x67) = uVar5;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      FUN__text__0063df70(auStack_f0);
      cVar7 = FUN__text__00602dbc();
      if (cVar7 == '\0') {
        uVar16 = 4;
      }
      else {
        *(char *)((long)puVar13 + 0x91) = cVar7;
        *(undefined1 *)((long)puVar13 + 0x92) = 0;
        FUN__text__0063df64(auStack_f0);
        cVar7 = FUN__text__00602ddc();
        if (cVar7 == '\0') {
          uVar16 = 5;
        }
        else {
          *(char *)((long)puVar13 + 0x93) = cVar7;
          *(undefined4 *)((long)puVar13 + 0x94) = 0;
          *(undefined1 *)(puVar13 + 0x13) = 0xff;
          uVar14 = FUN__text__0063e1d8(auStack_f0);
          uVar9 = FUN__text__0063df64(auStack_f0);
          uVar14 = FUN__text__00602e64((long)puVar13 + 0x99,uVar14 & 0xffffffffffffff,uVar9);
          if ((uVar14 & 1) == 0) {
            uVar16 = 6;
          }
          else {
            *(undefined4 *)((long)puVar13 + 0xbb) = 0;
            *(undefined8 *)((long)puVar13 + 0xb3) = 0;
            FUN__text__0063e204(auStack_f0);
            uVar5 = FUN__text__0060324c();
            *(undefined1 *)((long)puVar13 + 0xbf) = uVar5;
            FUN__text__0063e1f4(auStack_f0);
            uVar5 = FUN__text__00602ed0();
            *(undefined1 *)(puVar13 + 0x18) = uVar5;
            *(undefined1 *)((long)puVar13 + 0xc1) = 0;
            *local_70 = 0;
            *(undefined4 *)(local_70 + 1) = 0;
            *(undefined2 *)(local_70 + 5) = *(undefined2 *)(param_4 + 4);
            *(undefined2 *)(local_70 + 7) = *(undefined2 *)((long)param_4 + 0x22);
            *(undefined2 *)(local_70 + 9) = *(undefined2 *)((long)param_4 + 0x24);
            *(undefined2 *)(local_70 + 0xb) = *(undefined2 *)((long)param_4 + 0x26);
            bVar6 = FUN__text__0063e11c(auStack_f0);
            param_2[1] = bVar6 & 1;
            *(undefined8 *)(local_70 + 0x35) = 0;
            *(undefined8 *)(local_70 + 0x2d) = 0;
            *(undefined8 *)(local_70 + 0x25) = 0;
            *(undefined8 *)(local_70 + 0x1d) = 0;
            *(undefined8 *)(local_70 + 0x15) = 0;
            *(undefined8 *)(local_70 + 0xd) = 0;
            *(undefined2 *)(local_70 + 0x3d) = 0;
            FUN__text__0063e214(auStack_f0);
            iVar10 = FUN__text__00602dac();
            if (iVar10 != 0) {
              local_70[0x3f] = (char)iVar10;
              uVar8 = FUN__text__0060325c();
              *(undefined2 *)(local_70 + 0x40) = uVar8;
              uVar8 = FUN__text__00603264();
              *(undefined2 *)(local_70 + 0x42) = uVar8;
              local_70[0x44] = 0;
              bVar3 = local_70[0x47];
              *(undefined2 *)(local_70 + 0x45) = *(undefined2 *)((long)param_4 + 4);
              bVar4 = *(char *)((long)param_4 + 3) == '\0';
              local_70[0x47] = bVar3 & 0xfe | bVar4;
              bVar6 = bVar4 | (*(char *)((long)param_4 + 3) == '\x01') << 1;
              local_70[0x47] = bVar3 & 0xfc | bVar6;
              local_70[0x47] = bVar3 & 0xf8 | bVar6 | (*(char *)((long)param_4 + 3) == '\x02') << 2;
              uVar16 = param_4[1];
              uVar2 = param_4[2];
              uVar17 = param_4[3];
              *(undefined8 *)(param_2 + 0x22) = param_4[4];
              *(undefined8 *)(param_2 + 0x1a) = uVar17;
              *(undefined8 *)(param_2 + 0x12) = uVar2;
              *(undefined8 *)(param_2 + 10) = uVar16;
              *(undefined8 *)(param_2 + 2) = *param_4;
              uVar16 = 1;
              goto LAB__text__0060aa3c;
            }
            uVar16 = 7;
          }
        }
      }
    }
  }
LAB__text__0060aa34:
  FUN__text__0060342c(param_2 + 0x2c,uVar16);
  uVar16 = 0;
LAB__text__0060aa3c:
  FUN__text__0060e79c(auStack_60);
  return uVar16;
}


