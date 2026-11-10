/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00628400; name: FUN_.text__00628400
 */


void FUN__text__00628400(undefined8 param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  code *local_580;
  code *local_578;
  undefined *local_570;
  undefined *puStack_568;
  undefined1 auStack_560 [96];
  code *local_500;
  code *local_4f8;
  undefined *local_4f0;
  undefined *puStack_4e8;
  undefined1 auStack_4e0 [96];
  undefined1 *local_480;
  code *local_478;
  undefined *local_470;
  undefined *puStack_468;
  undefined1 auStack_460 [96];
  code *local_400;
  code *local_3f8;
  undefined *local_3f0;
  undefined *puStack_3e8;
  undefined1 auStack_3e0 [96];
  undefined1 *local_380;
  code *local_378;
  undefined *local_370;
  undefined *local_368;
  undefined1 auStack_360 [96];
  code *local_300;
  code *local_2f8;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined1 auStack_2e0 [96];
  code *local_280;
  code *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined1 auStack_260 [96];
  code *local_200;
  code *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined1 auStack_1e0 [96];
  code *local_180;
  code *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_160 [96];
  code *local_100;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [104];
  undefined2 local_78;
  undefined1 local_74 [4];
  undefined8 local_70 [2];
  
  local_580 = FUN__text__0062fd5c;
  local_578 = FUN__text__0062fd70;
  local_570 = &DAT__text__0062fd74;
  puStack_568 = &DAT__text__0062fd78;
  local_500 = FUN__text__0062fd7c;
  local_4f8 = FUN__text__0062fd94;
  local_4f0 = &DAT__text__0062fd98;
  puStack_4e8 = &DAT__text__0062fd9c;
  local_480 = &LAB__text__0062fda0;
  local_478 = FUN__text__0062fdb4;
  local_470 = &DAT__text__0062fdb8;
  puStack_468 = &DAT__text__0062fdbc;
  local_400 = FUN__text__0062fdc0;
  local_3f8 = FUN__text__0062fdd8;
  local_3f0 = &DAT__text__0062fddc;
  puStack_3e8 = &DAT__text__0062fde0;
  local_380 = &LAB__text__0062fde4;
  local_378 = FUN__text__0062fdec;
  local_370 = &DAT__text__0062fdf0;
  local_368 = &DAT__text__0062fdf4;
  local_300 = FUN__text__0062fdf8;
  local_2f8 = FUN__text__0062fdfc;
  local_2f0 = &DAT__text__0062fe00;
  local_2e8 = &DAT__text__0062fe04;
  local_280 = FUN__text__0062fe08;
  local_278 = FUN__text__0062fe18;
  local_270 = &DAT__text__0062fe1c;
  local_268 = &DAT__text__0062fe20;
  local_200 = FUN__text__0062fe24;
  local_1f8 = FUN__text__0062fe3c;
  local_1f0 = &DAT__text__0062fe40;
  local_1e8 = &DAT__text__0062fe44;
  local_f0 = &DAT__text__0062fe80;
  local_180 = FUN__text__0062fe48;
  local_e8 = &DAT__text__0062fe84;
  local_178 = FUN__text__0062fe60;
  local_170 = &DAT__text__0062fe64;
  local_168 = &DAT__text__0062fe68;
  local_100 = FUN__text__0062fe6c;
  local_f8 = FUN__text__0062fe7c;
  pcVar10 = FUN__text__0062fe7c;
  if (*(short *)(param_2 + 0xd) == 0x1df) {
    uVar5 = *(ushort *)(param_2 + 0x22);
    iVar8 = FUN__text__00638c5c(uVar5);
    uVar11 = (uint)uVar5;
    if (iVar8 == 0) {
      uVar12 = 0;
      do {
        uVar3 = (undefined1)uVar12;
        if (uVar11 == 0) {
LAB__text__00628aac:
          local_78 = CONCAT11(local_78._1_1_,uVar3);
          local_70[0] = param_1;
          uVar5 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar5 != 0) && (uVar9 = FUN__text__00638c5c(1), uVar9 == uVar5)) {
            local_78 = 0;
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_74[0] = 0;
            local_70[0] = param_1;
            local_78._0_1_ = uVar3;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,uVar3);
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
          if (uVar11 != 2) goto LAB__text__00628b58;
LAB__text__00628c04:
          local_78 = CONCAT11(local_78._1_1_,uVar3);
          local_70[0] = param_1;
          uVar5 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar5 != 0) && (uVar9 = FUN__text__00638c5c(3), uVar9 == uVar5)) {
            local_78 = 0;
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_74[0] = 0;
            local_70[0] = param_1;
            local_78._0_1_ = uVar3;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,uVar3);
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
          if (uVar11 != 4) goto LAB__text__00628cb0;
LAB__text__00628d5c:
          local_78 = CONCAT11(local_78._1_1_,uVar3);
          local_70[0] = param_1;
          uVar5 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar5 != 0) && (uVar9 = FUN__text__00638c5c(5), uVar9 == uVar5)) {
            local_78 = 0;
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_74[0] = 0;
            local_70[0] = param_1;
            local_78._0_1_ = uVar3;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,uVar3);
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
        }
        else {
          local_78 = CONCAT11(local_78._1_1_,uVar3);
          local_70[0] = param_1;
          uVar5 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar5 != 0) && (uVar9 = FUN__text__00638c5c(0), uVar9 == uVar5)) {
            local_78 = 0;
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_74[0] = 0;
            local_70[0] = param_1;
            local_78._0_1_ = uVar3;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,uVar3);
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
          if (uVar11 != 1) goto LAB__text__00628aac;
LAB__text__00628b58:
          local_78 = CONCAT11(local_78._1_1_,uVar3);
          local_70[0] = param_1;
          uVar5 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar5 != 0) && (uVar9 = FUN__text__00638c5c(2), uVar9 == uVar5)) {
            local_78 = 0;
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_74[0] = 0;
            local_70[0] = param_1;
            local_78._0_1_ = uVar3;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,uVar3);
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
          if (uVar11 != 3) goto LAB__text__00628c04;
LAB__text__00628cb0:
          local_78 = CONCAT11(local_78._1_1_,uVar3);
          local_70[0] = param_1;
          uVar5 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar5 != 0) && (uVar9 = FUN__text__00638c5c(4), uVar9 == uVar5)) {
            local_78 = 0;
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_74[0] = 0;
            local_70[0] = param_1;
            local_78._0_1_ = uVar3;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,uVar3);
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
          if (uVar11 != 5) goto LAB__text__00628d5c;
        }
        bVar2 = uVar12 < 3;
        uVar12 = uVar12 + 1;
      } while (bVar2);
    }
    else {
      uVar12 = 0;
      do {
        uVar1 = (ushort)iVar8;
        if ((uint)uVar5 != (uVar12 & 0xffff)) {
          local_78 = local_78 & 0xff00;
          local_70[0] = param_1;
          uVar4 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar4 != 0) && (uVar9 = FUN__text__00638c5c(uVar12), uVar9 == uVar4)) {
            local_70[0] = CONCAT44(local_70[0]._4_4_,iVar8);
            local_78 = local_78 & 0xff00;
            uVar3 = (*local_100)(auStack_e0,local_70,&local_78);
            local_74[0] = 0;
            local_78 = uVar1;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_78 = local_78 & 0xff00;
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = local_78 & 0xff00;
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
        }
        uVar9 = uVar12 & 0xffff;
        uVar12 = uVar12 + 1;
      } while (uVar9 < 5);
      uVar12 = 0;
      do {
        if ((uint)uVar5 != (uVar12 & 0xffff)) {
          local_78 = CONCAT11(local_78._1_1_,1);
          local_70[0] = param_1;
          uVar4 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar4 != 0) && (uVar9 = FUN__text__00638c5c(uVar12), uVar9 == uVar4)) {
            local_70[0] = CONCAT44(local_70[0]._4_4_,iVar8);
            local_78 = local_78 & 0xff00;
            uVar3 = (*local_100)(auStack_e0,local_70,&local_78);
            local_74[0] = 1;
            local_78 = uVar1;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_78._0_1_ = 1;
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,1);
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
        }
        uVar9 = uVar12 & 0xffff;
        uVar12 = uVar12 + 1;
      } while (uVar9 < 5);
      uVar12 = 0;
      do {
        if (uVar11 != (uVar12 & 0xffff)) {
          local_78 = CONCAT11(local_78._1_1_,2);
          local_70[0] = param_1;
          uVar5 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar5 != 0) && (uVar9 = FUN__text__00638c5c(uVar12), uVar9 == uVar5)) {
            local_70[0] = CONCAT44(local_70[0]._4_4_,iVar8);
            local_78 = local_78 & 0xff00;
            uVar3 = (*local_100)(auStack_e0,local_70,&local_78);
            local_74[0] = 2;
            local_78 = uVar1;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_78._0_1_ = 2;
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,2);
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
        }
        uVar9 = uVar12 & 0xffff;
        uVar12 = uVar12 + 1;
      } while (uVar9 < 5);
      uVar12 = 0;
      do {
        if (uVar11 != (uVar12 & 0xffff)) {
          local_78 = CONCAT11(local_78._1_1_,3);
          local_70[0] = param_1;
          uVar5 = (*local_580)(auStack_560,local_70,&local_78);
          if ((uVar5 != 0) && (uVar9 = FUN__text__00638c5c(uVar12), uVar9 == uVar5)) {
            local_70[0] = CONCAT44(local_70[0]._4_4_,iVar8);
            local_78 = local_78 & 0xff00;
            uVar3 = (*local_100)(auStack_e0,local_70,&local_78);
            local_74[0] = 3;
            local_78 = uVar1;
            local_70[0] = param_1;
            (*local_500)(auStack_4e0,local_70,local_74,&local_78);
            local_78._0_1_ = 3;
            local_74[0] = 0;
            local_70[0] = param_1;
            (*local_300)(auStack_2e0,local_70,&local_78,local_74);
            local_78 = CONCAT11(local_78._1_1_,3);
            local_74[0] = uVar3;
            local_70[0] = param_1;
            (*local_400)(auStack_3e0,local_70,&local_78,local_74);
          }
        }
        uVar9 = uVar12 & 0xffff;
        uVar12 = uVar12 + 1;
      } while (uVar9 < 5);
    }
    local_78 = (ushort)local_78._1_1_ << 8;
    local_70[0] = param_1;
    sVar6 = (*local_580)(auStack_560,local_70,&local_78);
    local_78._0_1_ = 1;
    local_70[0] = param_1;
    sVar7 = (*local_580)(auStack_560,local_70,&local_78);
    local_78._0_1_ = 2;
    uVar11 = (uint)(sVar6 != 0);
    if (sVar7 != 0) {
      uVar11 = uVar11 + 1;
    }
    local_70[0] = param_1;
    sVar6 = (*local_580)(auStack_560,local_70,&local_78);
    local_78 = CONCAT11(local_78._1_1_,3);
    if (sVar6 != 0) {
      uVar11 = uVar11 + 1;
    }
    local_70[0] = param_1;
    sVar6 = (*local_580)(auStack_560,local_70,&local_78);
    if (uVar11 == -(uint)(sVar6 != 0)) {
      local_70[0] = CONCAT44(local_70[0]._4_4_,0x54);
      local_78 = local_78 & 0xff00;
      uVar3 = (*local_100)(auStack_e0,local_70,&local_78);
      local_74[0] = 0;
      local_78 = 0x54;
      local_70[0] = param_1;
      (*local_500)(auStack_4e0,local_70,local_74,&local_78);
      local_78 = local_78 & 0xff00;
      local_74[0] = 0;
      local_70[0] = param_1;
      (*local_300)(auStack_2e0,local_70,&local_78,local_74);
      local_78 = local_78 & 0xff00;
      local_74[0] = uVar3;
      local_70[0] = param_1;
      (*local_400)(auStack_3e0,local_70,&local_78,local_74);
    }
    FUN__text__00623208(param_1,&local_580);
    pcVar10 = local_f8;
    if (local_f8 == (code *)0x0) goto LAB__text__00628f64;
  }
  local_f0 = (undefined *)0x0;
  local_e8 = (undefined *)0x0;
  local_100 = (code *)0x0;
  local_f8 = (code *)0x0;
  (*pcVar10)(auStack_e0);
LAB__text__00628f64:
  pcVar10 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined *)0x0;
    local_168 = (undefined *)0x0;
    local_180 = (code *)0x0;
    local_178 = (code *)0x0;
    (*pcVar10)(auStack_160);
  }
  pcVar10 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined *)0x0;
    local_1e8 = (undefined *)0x0;
    local_200 = (code *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar10)(auStack_1e0);
  }
  pcVar10 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined *)0x0;
    local_268 = (undefined *)0x0;
    local_280 = (code *)0x0;
    local_278 = (code *)0x0;
    (*pcVar10)(auStack_260);
  }
  pcVar10 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = (undefined *)0x0;
    local_2e8 = (undefined *)0x0;
    local_300 = (code *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar10)(auStack_2e0);
  }
  pcVar10 = local_378;
  if (local_378 != (code *)0x0) {
    local_370 = (undefined *)0x0;
    local_368 = (undefined *)0x0;
    local_380 = (undefined1 *)0x0;
    local_378 = (code *)0x0;
    (*pcVar10)(auStack_360);
  }
  pcVar10 = local_3f8;
  if (local_3f8 != (code *)0x0) {
    local_3f0 = (undefined *)0x0;
    puStack_3e8 = (undefined *)0x0;
    local_400 = (code *)0x0;
    local_3f8 = (code *)0x0;
    (*pcVar10)(auStack_3e0);
  }
  pcVar10 = local_478;
  if (local_478 != (code *)0x0) {
    local_470 = (undefined *)0x0;
    puStack_468 = (undefined *)0x0;
    local_480 = (undefined1 *)0x0;
    local_478 = (code *)0x0;
    (*pcVar10)(auStack_460);
  }
  pcVar10 = local_4f8;
  if (local_4f8 != (code *)0x0) {
    local_4f0 = (undefined *)0x0;
    puStack_4e8 = (undefined *)0x0;
    local_500 = (code *)0x0;
    local_4f8 = (code *)0x0;
    (*pcVar10)(auStack_4e0);
  }
  pcVar10 = local_578;
  if (local_578 != (code *)0x0) {
    local_570 = (undefined *)0x0;
    puStack_568 = (undefined *)0x0;
    local_580 = (code *)0x0;
    local_578 = (code *)0x0;
    (*pcVar10)(auStack_560);
  }
  return;
}


