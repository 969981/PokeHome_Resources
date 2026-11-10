/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038ad24; name: FUN_.text__0038ad24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0038ad24(undefined8 *param_1)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_44;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar4 = *_DAT_0089f518;
  FUN__text__005e927c(auStack_40,_DAT_008a3150);
  lVar2 = FUN__text__0039b7d0(uVar4,auStack_40);
  local_44 = (undefined4)*param_1;
  uVar1 = FUN__text__00388580(lVar2,&local_44);
  if (((uVar1 & 0xff) == 0) && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_44);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return 0xff < uVar1;
}


