/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005eb6ec; name: FUN_.text__005eb6ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__005eb6ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  undefined1 uStack_29;
  undefined1 *local_28;
  
  thunk_FUN__text__005cf500(&local_38,param_2);
  local_40 = *(undefined8 *)(local_38 + 0xd0);
  *param_1 = local_40;
  local_28 = (undefined1 *)&local_40;
  lVar2 = FUN__text__005ed6f0(param_3 + 0x6c0,&local_40,_DAT_008a01d8,&local_28,&uStack_29);
  lVar1 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x18);
  *(long *)(lVar2 + 0x18) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return 1;
}


