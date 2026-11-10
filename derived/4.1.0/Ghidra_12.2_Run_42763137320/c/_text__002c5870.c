/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c5870; name: FUN_.text__002c5870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN__text__002c5870(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ushort *puVar9;
  long *plVar10;
  long local_68 [6];
  long local_38;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    FUN__text__002c5a74(local_68,0x70f950);
    FUN__text__00113bb0(&local_38,*_DAT_0089f550,0,local_68,0,param_2,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x18) = local_38;
    if (local_38 != 0) {
      plVar10 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      if (*(long *)(param_1 + 0x20) != 0 || *(long *)(param_1 + 0xa0) != 0) {
        FUN__text__005d9010(local_38,param_1 + 0x10,1);
      }
      FUN__text__005d8de0(local_38);
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(plVar10);
    }
    if ((local_68[3] != 0) && (local_68[0] != 0)) {
      (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
    }
    local_68[0] = 0;
    local_68[1] = 0xcbf29ce484222645;
    local_68[2] = 0x70f683;
    local_68[3] = 0;
    if (local_68[4] != 0) {
      (**(code **)(*(long *)(local_68[4] + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
      *(undefined1 *)(param_1 + 0x120) = 1;
      puVar3 = *(ushort **)(lVar2 + 400);
      uVar1 = *puVar3;
      *(ushort *)(param_1 + 0x122) = uVar1;
      if (uVar1 == 0) {
        memset((void *)(param_1 + 0x128),0,0x71c);
        return *(undefined1 *)(param_1 + 0x120);
      }
      puVar3 = puVar3 + 1;
      *(ushort **)(param_1 + 0x128) = puVar3;
      memset((void *)(param_1 + 0x130),0,0x714);
      uVar4 = 0;
      uVar7 = 0;
      do {
        if (uVar7 < uVar1) {
          uVar8 = (ulong)uVar7;
          puVar9 = puVar3 + (ulong)uVar7 * 3;
          uVar6 = 0;
          do {
            uVar5 = (undefined2)uVar6;
            uVar7 = (uint)uVar8 & 0xffff;
            if (uVar4 != *puVar9) goto LAB__text__002c59f8;
            uVar8 = uVar8 + 1;
            if (uVar6 != 0) {
              uVar7 = uVar6;
            }
            uVar5 = (undefined2)uVar7;
            puVar9 = puVar9 + 3;
            uVar6 = uVar7;
          } while (uVar1 != uVar8);
          uVar7 = (uint)uVar1;
        }
        else {
          uVar5 = 0;
        }
LAB__text__002c59f8:
        *(undefined2 *)(param_1 + 0x130 + uVar4 * 2) = uVar5;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x38a);
    }
  }
  return *(undefined1 *)(param_1 + 0x120);
}


