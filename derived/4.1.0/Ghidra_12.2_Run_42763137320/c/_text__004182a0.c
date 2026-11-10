/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004182a0; name: FUN_.text__004182a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004182a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  plVar3 = _DAT_008a4d78;
  puVar2 = _DAT_008a45f0;
  puVar1 = _DAT_008a45e0;
  if ((int)_DAT_008a4d78[1] != 0) {
    piVar5 = (int *)*_DAT_008a4d78;
    fVar6 = -3.4028235e+38;
    iVar4 = *piVar5;
    do {
      if (iVar4 != *piVar5) {
        local_88 = 0;
        local_80 = 0;
        local_78 = 0xff;
        local_70 = 0xff;
        local_68 = 0;
        local_90 = 0;
        FUN__text__00434a40(fVar6,*puVar2,iVar4,&local_90,0,1,0);
        iVar4 = *piVar5;
        fVar6 = -3.4028235e+38;
      }
      fVar7 = (float)piVar5[4];
      if (*(long *)(piVar5 + 2) == -1) {
        local_90 = 0;
      }
      else {
        local_90 = FUN__text__00447b30(*puVar1);
      }
      local_88 = 0;
      local_80 = 0;
      local_78 = 0xff;
      local_70 = 0xff;
      local_68 = 0;
      FUN__text__00434a40(fVar7,*puVar2,iVar4,&local_90,0,1,0);
      if (fVar6 <= fVar7) {
        fVar6 = fVar7;
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != (int *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x18));
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xff;
    local_70 = 0xff;
    local_68 = 0;
    local_90 = 0;
    FUN__text__00434a40(fVar6,*puVar2,iVar4,&local_90,0,1,0);
    *(undefined4 *)(plVar3 + 1) = 0;
  }
  return;
}


