/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006534d0; name: FUN_.text__006534d0
 */


void FUN__text__006534d0(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  pcVar8 = *(char **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar7 = 0x7161db;
    uVar6 = 0x70f683;
  }
  else {
    uVar6 = 0x70f683;
    if ((pcVar8 != (char *)0x0) && (uVar6 = 0x70f683, *pcVar8 != '.')) {
      uVar6 = 0x70fb6e;
    }
    uVar7 = 0x71a40e;
  }
  pcVar1 = (char *)0x70fc72;
  if (pcVar8 != (char *)0x0) {
    pcVar1 = pcVar8;
  }
  lVar2 = 0x70eff8;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
  }
  lVar3 = 0x70f683;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
  }
  uVar4 = 0x7161db;
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar4 = 0x71a40e;
  }
  uVar5 = 0x70f683;
  if (*(char *)(param_1 + 0x5a) != '\0') {
    uVar5 = 0x718d5d;
  }
  FUN__text__00659a28(0x71af2d,uVar5,uVar6,pcVar1,uVar7,lVar2,uVar4,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 8),lVar3);
  return;
}


