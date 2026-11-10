/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e2734; name: FUN_.text__005e2734
 */


void FUN__text__005e2734(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (*(int *)(param_1 + 0x138) == 0)) {
    lVar1 = (*(code *)**(undefined8 **)*param_2)
                      ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x268));
    if (*(long *)(lVar1 + 8) != 0) {
      uVar2 = FUN__text__005e7d30(param_1,param_2);
      if ((uVar2 & 1) == 0) {
        return;
      }
      FUN__text__005e49f0(*(undefined8 *)(param_1 + 0x150),param_1,param_2);
      return;
    }
  }
  FUN__text__005e7dd0(param_1,param_2);
  return;
}


