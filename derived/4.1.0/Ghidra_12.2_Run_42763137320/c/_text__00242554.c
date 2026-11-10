/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00242554; name: FUN_.text__00242554
 */


void FUN__text__00242554(long *param_1,uint *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *param_3;
  uVar4 = *param_4;
  uVar2 = *param_2;
  lVar5 = *param_1;
  FUN__text__00139e64(uVar4,uVar1);
  FUN__text__0013a0d0(uVar4,4,uVar1);
  uVar3 = FUN__text__005f3244(*(undefined8 *)(lVar5 + (ulong)uVar2 * 8 + 200));
  FUN__text__0013a218(uVar4,5,uVar1,uVar3,0xb);
  return;
}


