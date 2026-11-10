/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cb550; name: FUN_.text__002cb550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002cb550(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_4c;
  undefined4 *local_48;
  long *local_28;
  
  uVar1 = _DAT_008a01d8;
  lVar2 = *(long *)(param_1 + 0x50);
  plVar3 = *(long **)(lVar2 + 0x298);
  if (plVar3 != (long *)0x0) {
    do {
      local_28 = plVar3 + 2;
      local_4c = 0;
      local_48 = &local_4c;
      FUN__text__002cc440(param_1 + 0x78,local_28,uVar1,&local_28,&local_48);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    lVar2 = *(long *)(param_1 + 0x50);
  }
  FUN__text__002cd43c(lVar2);
  uVar1 = _DAT_008a01d8;
  lVar2 = *(long *)(param_1 + 0x58);
  plVar3 = *(long **)(lVar2 + 0x298);
  if (plVar3 != (long *)0x0) {
    do {
      local_28 = plVar3 + 2;
      local_4c = 0;
      local_48 = &local_4c;
      FUN__text__002cc440(param_1 + 0xd0,local_28,uVar1,&local_28,&local_48);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    lVar2 = *(long *)(param_1 + 0x58);
  }
  FUN__text__002cd43c(lVar2);
  uVar1 = _DAT_008a01d8;
  lVar2 = *(long *)(param_1 + 0x60);
  plVar3 = *(long **)(lVar2 + 0x298);
  if (plVar3 != (long *)0x0) {
    do {
      local_28 = plVar3 + 2;
      local_4c = 0;
      local_48 = &local_4c;
      FUN__text__002ccad0(param_1 + 0x128,local_28,uVar1,&local_28,&local_48);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    lVar2 = *(long *)(param_1 + 0x60);
  }
  FUN__text__002cd43c(lVar2);
  uVar1 = _DAT_008a01d8;
  lVar2 = *(long *)(param_1 + 0x68);
  plVar3 = *(long **)(lVar2 + 0x298);
  if (plVar3 != (long *)0x0) {
    do {
      local_28 = plVar3 + 2;
      local_4c = 0;
      local_48 = &local_4c;
      FUN__text__002ccad0(param_1 + 0x180,local_28,uVar1,&local_28,&local_48);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    lVar2 = *(long *)(param_1 + 0x68);
  }
  FUN__text__002cd43c(lVar2);
  uVar1 = _DAT_008a01d8;
  lVar2 = *(long *)(param_1 + 0x70);
  plVar3 = *(long **)(lVar2 + 0x298);
  if (plVar3 != (long *)0x0) {
    do {
      local_28 = plVar3 + 2;
      local_4c = 0;
      local_48 = &local_4c;
      FUN__text__002ccad0(param_1 + 0x1d8,local_28,uVar1,&local_28,&local_48);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    lVar2 = *(long *)(param_1 + 0x70);
  }
  FUN__text__002cd43c(lVar2);
  *(undefined1 *)(param_1 + 0x230) = 1;
  return;
}


