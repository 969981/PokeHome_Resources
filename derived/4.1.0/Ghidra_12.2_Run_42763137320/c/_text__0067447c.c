/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067447c; name: FUN_.text__0067447c
 */


undefined8
FUN__text__0067447c(ulong param_1,char *param_2,char *param_3,uint param_4,int param_5,long *param_6
                   )

{
  char *__s;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  undefined8 uVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  long *local_2d8;
  long local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0;
  char local_2be [6];
  undefined2 local_2b8;
  undefined1 local_2b6 [598];
  
  lVar10 = param_6[0x27];
  lVar9 = *param_6;
  uVar1 = *(undefined4 *)((long)param_6 + (long)param_5 * 4 + 600);
  bVar2 = (int)lVar10 == 5;
  __n = strlen(param_3);
  uVar12 = *(ulong *)(lVar9 + 0x6c8);
  if ((*(byte *)((long)param_6 + 0x3fc) >> 5 & 1) != 0) {
    FUN__text__00666f74(lVar9,0x71c7f4,param_3,param_4);
  }
  if (((int)lVar10 != 5) && (0xff < __n)) {
    FUN__text__00666f74(*param_6,0x70f30c,__n);
    bVar2 = true;
  }
  iVar3 = FUN__text__0064fa18(lVar9,0,1);
  if (iVar3 < 0) {
    uVar6 = 0x70dddb;
LAB__text__00674594:
    FUN__text__0066713c(lVar9,uVar6);
    return 0x1c;
  }
  FUN__text__0066526c(uVar1,1);
  uVar4 = FUN__text__00666b6c(0xffffffff,0xffffffff,uVar1,iVar3);
  if (uVar4 == 0) {
    lVar9 = *param_6;
    uVar6 = 0x714afd;
    goto LAB__text__00674594;
  }
  if (uVar4 == 0xffffffff) {
    lVar9 = *param_6;
    uVar6 = 0x70bdcf;
    goto LAB__text__006746b0;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar9 = *param_6;
    uVar6 = 0x70ca8f;
    goto LAB__text__006746b0;
  }
  if ((uVar12 & 0xfffffffffffffffa) != 0) {
    FUN__text__00666f74(*param_6,0x70bdea,uVar12);
  }
  memset(&local_2c0,0,600);
  local_2be[0] = '\0';
  __s = (char *)(-(uVar12 & 1) & param_1);
  if (__s == (char *)0x0) {
    cVar11 = '\x01';
  }
  else {
    cVar11 = '\x02';
    local_2be[1] = '\x02';
  }
  local_2d0 = 0;
  local_2c0 = CONCAT11(cVar11,5);
  FUN__text__0066526c(uVar1,0);
  FUN__text__00666f74(lVar9,0x71bde9,param_3,param_4);
  iVar5 = FUN__text__00667384(param_6,uVar1,&local_2c0,cVar11 + '\x02',&local_2d0);
  if ((iVar5 != 0) || (local_2d0 != (ulong)local_2c0._1_1_ + 2)) {
    uVar6 = 0x712167;
    goto LAB__text__006746b0;
  }
  FUN__text__0066526c(uVar1,1);
  uVar4 = FUN__text__00666b6c(uVar1,0xffffffff,0xffffffff,iVar3);
  if (uVar4 == 0) {
    lVar9 = *param_6;
    uVar6 = 0x71e0ca;
    goto LAB__text__00674594;
  }
  if (uVar4 == 0xffffffff) {
    lVar9 = *param_6;
    uVar6 = 0x70dfaf;
    goto LAB__text__006746b0;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    FUN__text__0066713c(*param_6,0x71646d);
    return 0x38;
  }
  local_2c8 = 0;
  FUN__text__0066526c(uVar1,0);
  iVar3 = FUN__text__00673f40(param_6,uVar1,&local_2c0,2,&local_2c8);
  if ((iVar3 != 0) || (local_2c8 != 2)) {
    uVar6 = 0x71218e;
    goto LAB__text__006746b0;
  }
  if ((char)local_2c0 != '\x05') {
    uVar6 = 0x714b18;
    goto LAB__text__006746b0;
  }
  if (local_2c0._1_1_ < 2) {
    if (local_2c0._1_1_ != 0) {
      if (local_2c0._1_1_ == 1) {
        uVar6 = 0x71d4aa;
        goto LAB__text__006746b0;
      }
LAB__text__00674818:
      uVar6 = 0x7182f8;
      goto LAB__text__006746b0;
    }
  }
  else {
    if (local_2c0._1_1_ == 0xff) {
      if ((__s == (char *)0x0) || (*__s == '\0')) {
        uVar6 = 0x71d4e5;
      }
      else {
        uVar6 = 0x7213df;
      }
      goto LAB__text__006746b0;
    }
    if (local_2c0._1_1_ != 2) goto LAB__text__00674818;
    if ((param_2 == (char *)0x0) || (__s == (char *)0x0)) {
      __n_01 = 0;
      local_2be[0] = '\0';
      local_2c0 = 1;
      lVar10 = 3;
    }
    else {
      __n_00 = strlen(__s);
      __n_01 = strlen(param_2);
      local_2c0 = CONCAT11((char)__n_00,1);
      if (__n_00 != 0) {
        memcpy((void *)((ulong)&local_2c0 | 2),__s,__n_00);
      }
      lVar10 = __n_00 + 3;
      local_2be[__n_00] = (char)__n_01;
      if (__n_01 != 0) {
        memcpy(local_2be + __n_00 + 1,param_2,__n_01);
      }
    }
    iVar3 = FUN__text__00667384(param_6,uVar1,&local_2c0,__n_01 + lVar10,&local_2d0);
    if ((iVar3 != 0) || (__n_01 + lVar10 != local_2d0)) {
      uVar6 = 0x71c821;
      goto LAB__text__006746b0;
    }
    iVar3 = FUN__text__00673f40(param_6,uVar1,&local_2c0,2,&local_2c8);
    if ((iVar3 != 0) || (local_2c8 != 2)) {
      uVar6 = 0x70cab8;
      goto LAB__text__006746b0;
    }
    if (local_2c0._1_1_ != '\0') {
      FUN__text__0066713c(lVar9,0x716fbc,(char)local_2c0);
      return 7;
    }
  }
  local_2be[0] = '\0';
  local_2c0 = 0x105;
  if (bVar2) {
    local_2d8 = (long *)0x0;
    iVar3 = FUN__text__00654998(param_6,param_3,param_4,&local_2d8);
    if (iVar3 == -1) {
      return 6;
    }
    if ((iVar3 == 1) && (uVar6 = FUN__text__0064f420(param_6,&local_2d8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if ((local_2d8 == (long *)0x0) || (lVar10 = *local_2d8, lVar10 == 0)) {
LAB__text__00674aa4:
      FUN__text__0066713c(lVar9,0x7114ec,param_3);
      return 6;
    }
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    FUN__text__006544e8(lVar10,&local_318,0x40);
    if (*(int *)(lVar10 + 4) != 2) {
      FUN__text__0066713c(lVar9,0x71a621,&local_318);
      FUN__text__00654bac(lVar9,local_2d8);
      goto LAB__text__00674aa4;
    }
    local_2be[1] = '\x01';
    lVar8 = *(long *)(lVar10 + 0x20);
    lVar10 = 0;
    do {
      local_2be[lVar10 + 2] = *(char *)(lVar8 + 4 + lVar10);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 4);
    FUN__text__00666f74(lVar9,0x7114be,&local_318);
    FUN__text__00654bac(lVar9,local_2d8);
    lVar10 = 8;
  }
  else {
    local_2be[2] = (char)__n;
    local_2be[1] = '\x03';
    memcpy(local_2be + 3,param_3,__n);
    lVar10 = __n + 5;
  }
  *(ushort *)(local_2be + lVar10 + -2) =
       (ushort)(param_4 >> 8) & 0xff | (ushort)((param_4 & 0xff00ff) << 8);
  iVar3 = FUN__text__00667384(param_6,uVar1,&local_2c0,lVar10 + 2,&local_2d0);
  if ((iVar3 == 0) && (lVar10 + 2 == local_2d0)) {
    iVar3 = FUN__text__00673f40(param_6,uVar1,&local_2c0,10,&local_2c8);
    if ((iVar3 == 0) && (local_2c8 == 10)) {
      if ((char)local_2c0 != '\x05') {
        uVar6 = 0x71fa70;
        goto LAB__text__006746b0;
      }
      if (local_2be[1] == '\x04') {
        lVar10 = 0x16;
      }
      else {
        if (local_2be[1] != '\x03') {
          lVar10 = 10;
          goto LAB__text__00674b04;
        }
        lVar10 = (ulong)(byte)local_2be[2] + 7;
        if ((ulong)(byte)local_2be[2] < 4) goto LAB__text__00674b04;
      }
      iVar3 = FUN__text__00673f40(param_6,uVar1,local_2b6,lVar10 + -10,&local_2c8);
      if ((iVar3 == 0) && (lVar10 + -10 == local_2c8)) {
LAB__text__00674b04:
        if (local_2c0._1_1_ == '\0') {
          FUN__text__00666f74(lVar9,0x70be29);
          FUN__text__0066526c(uVar1,1);
          return 0;
        }
        if (local_2be[1] == '\x04') {
          uVar6 = 0x7207f3;
          uVar7 = local_2b8 & 0xff;
        }
        else {
          if (local_2be[1] == '\x03') {
            uVar7 = *(ushort *)(local_2be + lVar10 + -4);
            local_2be[lVar10 + -4] = '\0';
            FUN__text__0066713c(lVar9,0x716fec,local_2be + 3,uVar7 >> 8 | uVar7 << 8,local_2c0._1_1_
                               );
            return 7;
          }
          if (local_2be[1] != '\x01') {
            return 7;
          }
          uVar6 = 0x70fe23;
          uVar7 = local_2b8 >> 8 | local_2b8 << 8;
          local_2b8._1_1_ = local_2c0._1_1_;
        }
        FUN__text__0066713c(lVar9,uVar6,local_2be[2],local_2be[3],local_2be[4],local_2be[5],uVar7,
                            local_2b8._1_1_);
        return 7;
      }
    }
    uVar6 = 0x711517;
  }
  else {
    uVar6 = 0x70d610;
  }
LAB__text__006746b0:
  FUN__text__0066713c(lVar9,uVar6);
  return 7;
}


