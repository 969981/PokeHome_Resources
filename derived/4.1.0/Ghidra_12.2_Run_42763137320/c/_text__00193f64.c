/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00193f64; name: FUN_.text__00193f64
 */


undefined8 FUN__text__00193f64(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_2 == 0) {
    return 0;
  }
  uVar5 = FUN__text__00306588();
  if (((uVar5 & 1) == 0) && (uVar5 = FUN__text__00306a08(*param_2,2), (uVar5 & 1) == 0)) {
    uVar5 = FUN__text__003069e8(*param_2,1);
    if ((uVar5 & 1) != 0) {
      uVar1 = FUN__text__003065f8(*param_2);
      uVar2 = FUN__text__00306600(*param_2);
      uVar5 = FUN__text__005fe794(uVar1,uVar2,1);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
    uVar5 = FUN__text__003069e8(*param_2,3);
    if ((uVar5 & 1) != 0) {
      uVar1 = FUN__text__003065f8(*param_2);
      uVar2 = FUN__text__00306600(*param_2);
      uVar5 = FUN__text__005fe794(uVar1,uVar2,3);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
    uVar5 = FUN__text__003069e8(*param_2,4);
    if ((uVar5 & 1) != 0) {
      uVar1 = FUN__text__003065f8(*param_2);
      uVar2 = FUN__text__00306600(*param_2);
      uVar5 = FUN__text__005fe794(uVar1,uVar2,4);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
    uVar5 = FUN__text__003069e8(*param_2,5);
    if ((uVar5 & 1) != 0) {
      uVar1 = FUN__text__003065f8(*param_2);
      uVar2 = FUN__text__00306600(*param_2);
      uVar5 = FUN__text__005fe794(uVar1,uVar2,5);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
    uVar5 = FUN__text__003069e8(*param_2,7);
    if ((uVar5 & 1) != 0) {
      uVar1 = FUN__text__003065f8(*param_2);
      uVar2 = FUN__text__00306600(*param_2);
      uVar5 = FUN__text__005fe794(uVar1,uVar2,7);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
    uVar6 = FUN__text__003069d0(*param_2);
    local_34 = 4;
    uVar5 = FUN__text__00196a94(uVar6,&local_34);
    if ((uVar5 & 1) == 0) {
      uVar6 = FUN__text__003069d0(*param_2);
      local_38 = 5;
      uVar3 = FUN__text__00196a94(uVar6,&local_38);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
    uVar5 = FUN__text__003069e8(*param_2,2);
    if ((uVar5 & 1) != 0) {
      lVar7 = *param_2;
      uVar1 = FUN__text__003065f8(lVar7);
      uVar2 = FUN__text__00306600(*param_2);
      uVar4 = FUN__text__00306c60(lVar7,uVar1,uVar2);
      if (((uVar3 | uVar4 ^ 0xffffffff) & 1) == 0) {
        return 1;
      }
    }
  }
  return 0;
}


