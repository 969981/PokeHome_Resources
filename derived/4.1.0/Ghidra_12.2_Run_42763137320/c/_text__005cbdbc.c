/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cbdbc; name: FUN_.text__005cbdbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cbdbc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long local_48;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x48;
  }
  FUN__text__005a7b0c(param_1,lVar1,1);
  *param_1 = 0x896788;
  param_1[9] = 0x8967e0;
  param_1[10] = 0x896820;
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar4 = (long *)param_1[1];
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x2f0,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN__text__005e217c(lVar2,lVar1,1);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x2f0;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  FUN__text__005e706c(lVar2);
  plVar4 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  pcVar3 = *(code **)(lVar2 + 0x278);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x280) = 0;
    *(undefined8 *)(lVar2 + 0x288) = 0;
    *(undefined8 *)(lVar2 + 0x270) = 0;
    *(undefined8 *)(lVar2 + 0x278) = 0;
    (*pcVar3)(lVar2 + 0x290);
  }
  *(long *)(lVar2 + 0x290) = param_2;
  *(undefined8 *)(lVar2 + 0x270) = _DAT_008a5900;
  *(undefined **)(lVar2 + 0x278) = &DAT__text__005cc1ec;
  *(undefined1 **)(lVar2 + 0x280) = &LAB__text__005cc1f0;
  *(undefined1 **)(lVar2 + 0x288) = &LAB__text__005cc1fc;
  local_48 = lVar2;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(plVar4);
  FUN__text__005e733c(param_1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


