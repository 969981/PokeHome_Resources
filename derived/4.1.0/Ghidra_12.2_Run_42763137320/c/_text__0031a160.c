/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031a160; name: FUN_.text__0031a160
 */


void FUN__text__0031a160(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  longlong lVar5;
  ulong uVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar6 = 0;
  bVar1 = false;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  do {
    while( true ) {
      iVar2 = snprintf((char *)&local_e0,0x40,(char *)0x70f9df,uVar6 & 0xffffffff);
      lVar3 = FUN__text__00321ac0(iVar2);
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      uVar4 = FUN__text__00317e00(param_1,&local_a0,&local_e0,param_2);
      if ((uVar4 & 1) != 0) {
        lVar5 = atoll((char *)&local_a0);
        *(longlong *)(lVar3 + uVar6 * 8 + 0x7b078) = lVar5;
        lVar3 = FUN__text__00321ac0();
        if (*(long *)(lVar3 + uVar6 * 8 + 0x7b078) != 0) {
          if (!bVar1) {
            lVar3 = FUN__text__00321ac0();
            *(undefined4 *)(lVar3 + 0x7b168) = 0;
          }
          lVar3 = FUN__text__00321ac0();
          bVar1 = true;
          *(int *)(lVar3 + 0x7b168) = *(int *)(lVar3 + 0x7b168) + 1;
        }
      }
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      iVar2 = snprintf((char *)&local_e0,0x40,(char *)0x7194f9,uVar6 & 0xffffffff);
      lVar3 = FUN__text__00321ac0(iVar2);
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      uVar4 = FUN__text__00317e00(param_1,&local_a0,&local_e0,param_2);
      if ((uVar4 & 1) != 0) break;
LAB__text__0031a1c4:
      uVar6 = uVar6 + 1;
      if (uVar6 == 0x1e) {
        if (bVar1) {
          return;
        }
        iVar2 = FUN__text__0031e240(param_2,0x70ef33,5);
        if (iVar2 == 0) {
          lVar3 = FUN__text__00321ac0();
          *(undefined4 *)(lVar3 + 0x7b260) = 0;
          iVar2 = FUN__text__0031e240(param_2,0x71e782,4);
        }
        else {
          iVar2 = FUN__text__0031e240(param_2,0x71e782,4);
        }
        if (iVar2 == 0) {
          lVar3 = FUN__text__00321ac0();
          *(undefined4 *)(lVar3 + 0x7b168) = 0;
          return;
        }
        return;
      }
    }
    lVar5 = atoll((char *)&local_a0);
    *(longlong *)(lVar3 + uVar6 * 8 + 0x7b170) = lVar5;
    lVar3 = FUN__text__00321ac0();
    if (*(long *)(lVar3 + uVar6 * 8 + 0x7b170) == 0) goto LAB__text__0031a1c4;
    if (!bVar1) {
      lVar3 = FUN__text__00321ac0();
      *(undefined4 *)(lVar3 + 0x7b260) = 0;
    }
    lVar3 = FUN__text__00321ac0();
    uVar6 = uVar6 + 1;
    bVar1 = true;
    *(int *)(lVar3 + 0x7b260) = *(int *)(lVar3 + 0x7b260) + 1;
    if (uVar6 == 0x1e) {
      return;
    }
  } while( true );
}


