/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00302598; name: FUN_.text__00302598
 */


bool FUN__text__00302598(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  FUN__text__002a32ac(&local_30,local_28,&local_28);
  FUN__text__002a33c8(&local_38,local_28,&local_30);
  uVar3 = *(uint *)(param_1 + 0x700fdc);
  if ((int)uVar3 < 1) {
    bVar4 = false;
  }
  else {
    lVar6 = *param_2;
    lVar5 = 0;
    uVar7 = 1;
    bVar4 = true;
    do {
      lVar1 = param_1 + lVar5;
      if (((((*(int *)(lVar1 + 0x340) != 0) && (*(long *)(lVar1 + 0x348) == lVar6)) ||
           ((*(int *)(lVar1 + 0x670) != 0 && (*(long *)(lVar1 + 0x678) == lVar6)))) ||
          ((((*(int *)(lVar1 + 0x9a0) != 0 && (*(long *)(lVar1 + 0x9a8) == lVar6)) ||
            ((*(int *)(lVar1 + 0xcd0) != 0 && (*(long *)(lVar1 + 0xcd8) == lVar6)))) ||
           ((((*(int *)(lVar1 + 0x1000) != 0 && (*(long *)(lVar1 + 0x1008) == lVar6)) ||
             ((*(int *)(lVar1 + 0x1330) != 0 && (*(long *)(lVar1 + 0x1338) == lVar6)))) ||
            ((*(int *)(lVar1 + 0x1660) != 0 && (*(long *)(lVar1 + 0x1668) == lVar6)))))))) ||
         ((((*(int *)(lVar1 + 0x1990) != 0 && (*(long *)(lVar1 + 0x1998) == lVar6)) ||
           ((((((((*(int *)(lVar1 + 0x1cc0) != 0 && (*(long *)(lVar1 + 0x1cc8) == lVar6)) ||
                 ((*(int *)(lVar1 + 0x1ff0) != 0 && (*(long *)(lVar1 + 0x1ff8) == lVar6)))) ||
                ((*(int *)(lVar1 + 0x2320) != 0 && (*(long *)(lVar1 + 9000) == lVar6)))) ||
               ((*(int *)(lVar1 + 0x2650) != 0 && (*(long *)(lVar1 + 0x2658) == lVar6)))) ||
              ((((*(int *)(lVar1 + 0x2980) != 0 && (*(long *)(lVar1 + 0x2988) == lVar6)) ||
                ((*(int *)(lVar1 + 0x2cb0) != 0 && (*(long *)(lVar1 + 0x2cb8) == lVar6)))) ||
               ((*(int *)(param_1 + 0x2fe0 + lVar5) != 0 && (*(long *)(lVar1 + 0x2fe8) == lVar6)))))
              ) || ((lVar2 = param_1 + 0x2fe0 + lVar5, *(int *)(lVar2 + 0x330) != 0 &&
                    (*(long *)(lVar1 + 0x3318) == lVar6)))) ||
            (((((((*(int *)(lVar2 + 0x660) != 0 && (*(long *)(lVar1 + 0x3648) == lVar6)) ||
                 ((*(int *)(lVar2 + 0x990) != 0 && (*(long *)(lVar1 + 0x3978) == lVar6)))) ||
                ((*(int *)(lVar2 + 0xcc0) != 0 && (*(long *)(lVar1 + 0x3ca8) == lVar6)))) ||
               ((*(int *)(lVar2 + 0xff0) != 0 && (*(long *)(lVar1 + 0x3fd8) == lVar6)))) ||
              (((*(int *)(lVar2 + 0x1320) != 0 && (*(long *)(lVar1 + 0x4308) == lVar6)) ||
               ((*(int *)(lVar2 + 0x1650) != 0 && (*(long *)(lVar1 + 0x4638) == lVar6)))))) ||
             (((*(int *)(lVar2 + 0x1980) != 0 && (*(long *)(lVar1 + 0x4968) == lVar6)) ||
              ((*(int *)(lVar2 + 0x1cb0) != 0 && (*(long *)(lVar1 + 0x4c98) == lVar6)))))))))) ||
          (((((*(int *)(lVar2 + 0x1fe0) != 0 && (*(long *)(lVar1 + 0x4fc8) == lVar6)) ||
             ((*(int *)(lVar2 + 0x2310) != 0 && (*(long *)(lVar1 + 0x52f8) == lVar6)))) ||
            (((*(int *)(lVar2 + 0x2640) != 0 && (*(long *)(lVar1 + 0x5628) == lVar6)) ||
             ((*(int *)(lVar2 + 0x2970) != 0 && (*(long *)(lVar1 + 0x5958) == lVar6)))))) ||
           (((*(int *)(lVar2 + 0x2ca0) != 0 && (*(long *)(lVar1 + 0x5c88) == lVar6)) ||
            ((*(int *)(lVar2 + 0x2fd0) != 0 && (*(long *)(lVar1 + 0x5fb8) == lVar6)))))))))) break;
      bVar4 = uVar7 < uVar3;
      lVar5 = lVar5 + 0x5fa0;
      uVar7 = uVar7 + 1;
    } while ((ulong)uVar3 * 0x5fa0 != lVar5);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return bVar4;
}


