/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012cbe0; name: FUN_.text__0012cbe0
 */


undefined8 FUN__text__0012cbe0(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *local_40;
  ulong uStack_38;
  undefined8 local_18;
  
  uVar5 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    uVar5 = (uVar5 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  if (*(long *)(param_1 + 0x3d0) == 0) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x58);
  uVar4 = 0;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_40 = &local_18;
    local_18 = 0;
    uStack_38 = uVar5;
    FUN__text__0012efe0(lVar2,&local_40,0);
    uVar4 = local_18;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar4;
}


