/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ee434; name: FUN_.text__006ee434
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ee434(undefined1 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4,
                        long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined4 local_54;
  
  cVar2 = *param_3;
  param_1[1] = cVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  if (cVar2 == '\0') {
    *(long *)(param_1 + 0x10) = param_4[1] + param_5;
  }
  else {
    local_54 = 0;
    *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
    puVar3 = _DAT_008a5698;
    bVar4 = cVar2 != '\x01';
    local_58 = 0;
    uVar5 = 0x11;
    if (bVar4) {
      uVar5 = 0x12;
    }
    uVar6 = 0x24;
    if (bVar4) {
      uVar6 = 0x25;
    }
    puVar1 = _DAT_008a6fe0;
    if (bVar4) {
      puVar1 = _DAT_008a6fe8;
    }
    (*(code *)*_DAT_008a5698)(*param_2,uVar5,&local_54);
    (*(code *)*puVar3)(*param_2,uVar6,&local_58);
    (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0x10),*param_4,param_5,*(undefined4 *)(param_3 + 4)
                      );
    *(undefined4 *)(param_1 + 8) = local_54;
  }
  param_1[2] = param_1[2] & 0xfe;
  *param_1 = 1;
  return;
}


