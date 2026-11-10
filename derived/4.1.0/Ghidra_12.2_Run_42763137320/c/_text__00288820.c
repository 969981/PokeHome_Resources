/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00288820; name: FUN_.text__00288820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00288820(long param_1,ulong param_2)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  param_2 = param_2 & 0xffff;
  uVar10 = 0xcbf29ce484222645;
  lVar11 = *(long *)(*(long *)(param_1 + 0x640) + 0x7b220);
  puVar5 = (ushort *)
           FUN__text__0027a640(*(long *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x970),
                               *(undefined4 *)(param_1 + 0x974),*(undefined1 *)(param_1 + 0x978),
                               *(undefined1 *)(param_1 + 0x979));
  local_50 = 0;
  uStack_48 = 0;
  iVar1 = *(int *)(lVar11 + param_2 * 0xac + 0xa8);
  local_60 = 0;
  uStack_58 = 0;
  if (iVar1 == 1) {
    bVar2 = (byte)puVar5[1];
    uVar7 = (uint)bVar2;
    uVar3 = *puVar5;
    uVar8 = (ulong)uVar3;
    if (uVar3 == 0x365) {
      uVar7 = (uint)bVar2 * 0x25 >> 8;
      uVar7 = uVar7 + ((bVar2 - uVar7 & 0xfe) >> 1) >> 2;
    }
    uVar4 = 0x3e6;
    if (uVar7 != 1 || uVar3 != 0x37c) {
      uVar4 = 999;
    }
    if (*(char *)((long)puVar5 + 5) != '\0') {
      uVar7 = uVar4;
    }
    if (*(int *)(lVar11 + param_2 * 0xac) == 0x12) {
      uVar6 = FUN__text__00307040(uVar8);
      uVar8 = (ulong)*puVar5;
      if (((uVar6 & 1) != 0) && (*(char *)((long)puVar5 + 5) == '\0')) {
        uVar4 = FUN__text__00325c30(uVar8,uVar7);
        if ((uVar4 >> 4 & 1) == 0) {
          local_60 = _DAT_00730eb0;
          goto LAB__text__00288980;
        }
        uVar8 = (ulong)*puVar5;
      }
    }
    snprintf((char *)&local_60,0x20,(char *)(lVar11 + param_2 * 0xac + 0x88),uVar8,(ulong)uVar7);
  }
  else {
    if (iVar1 != 0) {
      return 0xcbf29ce484222645;
    }
    snprintf((char *)&local_60,0x20,(char *)(lVar11 + param_2 * 0xac + 0x88),(ulong)*puVar5);
  }
LAB__text__00288980:
  if ((byte)local_60 != 0) {
    pbVar9 = (byte *)((ulong)&local_60 | 1);
    do {
      uVar10 = (uVar10 ^ (byte)local_60) * 0x100000001b3;
      local_60._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_60 != 0);
  }
  return uVar10;
}


