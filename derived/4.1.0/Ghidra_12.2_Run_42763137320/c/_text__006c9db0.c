/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c9db0; name: FUN_.text__006c9db0
 */


void FUN__text__006c9db0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1[2] = param_2;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != param_3) {
    do {
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != param_3);
    lVar2 = FUN__text__006a0f04(0x38);
    if (lVar2 != 0) {
      FUN__text__0069e328(lVar2);
    }
    param_1[1] = lVar2;
    for (lVar2 = *(long *)(param_3 + 8); lVar2 != param_3; lVar2 = *(long *)(lVar2 + 8)) {
      uVar1 = (**(code **)(**(long **)(param_2 + 0x18) + 0x78))
                        (*(long **)(param_2 + 0x18),*(undefined8 *)(lVar2 + 0x10),1);
      FUN__text__0069e434(param_1[1],uVar1);
    }
    uVar1 = (**(code **)*param_1)(param_1);
    param_1[4] = uVar1;
  }
  return;
}


