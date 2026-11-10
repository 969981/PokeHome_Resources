/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c2ca4; name: FUN_.text__001c2ca4
 */


void FUN__text__001c2ca4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x18,8);
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  FUN__text__001aab88(uVar1,plVar2,param_1 + 0x110);
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  puVar4 = *(undefined8 **)(param_1 + 0x658);
  *(undefined8 *)(param_1 + 0x658) = uVar1;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(**(long **)(param_1 + 0x660) + 0x18))
              (*(long **)(param_1 + 0x660),puVar4,*(undefined8 *)(param_1 + 0x668),
               *(undefined8 *)(param_1 + 0x670));
  }
  *(long **)(param_1 + 0x660) = plVar2;
  *(undefined8 *)(param_1 + 0x668) = 0x18;
  *(undefined8 *)(param_1 + 0x670) = 8;
  FUN__text__001c2d9c(param_1);
  FUN__text__00128db0(param_1,0,1);
  FUN__text__00128ca0(param_1,0,1);
  return;
}


