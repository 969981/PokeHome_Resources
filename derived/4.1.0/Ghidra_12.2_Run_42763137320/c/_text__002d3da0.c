/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3da0; name: FUN_.text__002d3da0
 */


void FUN__text__002d3da0(long param_1,ulong param_2)

{
  int *piVar1;
  uint *puVar2;
  long *plVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  long local_48;
  
  if ((param_2 & 1) == 0) {
    FUN__text__002ce534(param_1,0);
    return;
  }
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x270);
  puVar2 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar4 != 0)) {
    puVar2 = (uint *)((long)piVar1 + uVar4);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    puVar5 = puVar2 + 1;
    if (*puVar2 != 0) {
      uVar4 = tpidr_el0;
      uVar4 = uVar4 & 0xffffffffffffe000;
      puVar6 = puVar5;
      do {
        while( true ) {
          local_48 = (long)puVar6 + (ulong)*puVar6;
          plVar3 = *(long **)(param_1 + 0x278);
          if (*(long **)(param_1 + 0x280) <= plVar3) break;
          if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
            FUN__text__00102c10();
          }
          *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) =
               *(undefined8 *)(param_1 + 0x288);
          *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
          *plVar3 = local_48;
          *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
          *(long **)(param_1 + 0x278) = plVar3 + 1;
          puVar6 = puVar6 + 1;
          if (puVar6 == puVar5 + *puVar2) goto LAB__text__002d3eac;
        }
        FUN__text__002d4280(param_1 + 0x270,&local_48);
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar5 + *puVar2);
    }
  }
LAB__text__002d3eac:
  FUN__text__002ce534(param_1,1);
  return;
}


