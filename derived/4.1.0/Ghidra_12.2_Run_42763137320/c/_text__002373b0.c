/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002373b0; name: FUN_.text__002373b0
 */


void FUN__text__002373b0(long param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  ulong local_38;
  
  lVar8 = *(long *)(param_1 + 0x2d0);
  if (lVar8 != 0) {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  lVar1 = (param_2 & 0xffffffff) * 0x40;
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a998,0);
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9a0,0);
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9a8,0);
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9b0,0);
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9b8,0);
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9c0,0);
  uVar4 = FUN__text__00227bf0(*(undefined8 *)(param_1 + 0x640),param_3,
                              *(undefined4 *)(*(long *)(param_1 + 0x650) + 0x74));
  puVar5 = (uint *)FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),uVar4);
  uVar2 = *puVar5;
  pbVar7 = *(byte **)((param_2 & 0xffffffff) * 8 + 0x8aa4e8);
  bVar3 = *pbVar7;
  local_38 = 0xcbf29ce484222645;
  while (bVar3 != 0) {
    pbVar7 = pbVar7 + 1;
    local_38 = (local_38 ^ bVar3) * 0x100000001b3;
    bVar3 = *pbVar7;
  }
  uVar6 = FUN__text__0012cdb0(param_1 + 0x110,&local_38);
  FUN__text__003a14c4(uVar6,uVar2 == 2 || uVar2 == 5);
  if (*puVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00237524 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00237530 + (ulong)*(byte *)((ulong)*puVar5 + 0x72a8e0) * 4))();
    return;
  }
  return;
}


