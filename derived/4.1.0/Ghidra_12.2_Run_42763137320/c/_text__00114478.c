/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00114478; name: FUN_.text__00114478
 */


void FUN__text__00114478(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  plVar1 = *(long **)(param_1 + 8);
  if (*(long **)(param_1 + 0x178) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x178);
  }
  uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar2,0x10);
  lVar4 = *(long *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = uVar3;
  if (lVar4 != 0) {
    (**(code **)(**(long **)(param_1 + 0x198) + 0x18))
              (*(long **)(param_1 + 0x198),lVar4,*(undefined8 *)(param_1 + 0x1a0),
               *(undefined8 *)(param_1 + 0x1a8));
    uVar3 = *(undefined8 *)(param_1 + 400);
  }
  *(long **)(param_1 + 0x198) = plVar1;
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  *(undefined8 *)(param_1 + 0x1a8) = 0x10;
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x180) & (long)*(ulong *)(param_1 + 0x180) >> 0x3f;
  FUN__text__005d8f28(param_1,uVar3);
  return;
}


