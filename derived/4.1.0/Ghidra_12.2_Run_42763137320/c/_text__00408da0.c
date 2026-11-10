/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00408da0; name: FUN_.text__00408da0
 */


void FUN__text__00408da0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  uint local_1574;
  undefined4 local_1570 [66];
  undefined4 local_1468;
  char local_1464 [268];
  undefined4 local_1358;
  undefined1 local_1354;
  undefined4 local_1248;
  undefined1 local_1244;
  undefined4 local_1138;
  undefined1 local_1134;
  undefined4 local_1028;
  undefined1 local_1024;
  undefined4 local_f18;
  undefined1 local_f14;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_cf8;
  undefined1 local_cf4;
  undefined4 local_be8;
  undefined1 local_be4;
  undefined4 local_ad8;
  undefined1 local_ad4;
  undefined4 local_9c8;
  undefined1 local_9c4;
  undefined4 local_8b8;
  undefined1 local_8b4;
  undefined4 local_7a8;
  undefined1 local_7a4;
  undefined4 local_698;
  undefined1 local_694;
  undefined4 local_588;
  undefined1 local_584;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_368;
  undefined1 local_364;
  undefined4 local_258;
  undefined1 local_254;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_38;
  undefined1 local_34;
  
  *param_2 = 0;
  uVar3 = (ulong)*param_1;
  if (*param_1 == 0) {
    uVar3 = FUN__text__0040bb00(0x70f001);
    *param_1 = (uint)uVar3;
  }
  local_1468 = 0;
  local_1464[0] = '\0';
  local_1358 = 0;
  local_1354 = 0;
  local_1248 = 0;
  local_1244 = 0;
  local_1138 = 0;
  local_1134 = 0;
  local_1028 = 0;
  local_1024 = 0;
  local_f18 = 0;
  local_f14 = 0;
  local_e08 = 0;
  local_e04 = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_ad8 = 0;
  local_ad4 = 0;
  local_9c8 = 0;
  local_9c4 = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_7a8 = 0;
  local_7a4 = 0;
  local_698 = 0;
  local_694 = 0;
  local_588 = 0;
  local_584 = 0;
  local_478 = 0;
  local_474 = 0;
  local_368 = 0;
  local_364 = 0;
  local_258 = 0;
  local_254 = 0;
  local_148 = 0;
  local_144 = 0;
  local_38 = 0;
  local_34 = 0;
  local_1574 = 0x14;
  iVar2 = FUN__text__00410a80(uVar3,&local_1574,local_1570);
  if (iVar2 == 1) {
    if (local_1574 != 0) {
      uVar3 = 0;
      pcVar4 = local_1464;
      do {
        if (*pcVar4 != '\0') goto LAB__text__00408edc;
        uVar3 = uVar3 + 1;
        pcVar4 = pcVar4 + 0x110;
      } while (local_1574 != uVar3);
      uVar3 = (ulong)local_1574;
LAB__text__00408edc:
      uVar1 = 0;
      if ((uint)uVar3 != local_1574) {
        uVar1 = (uint)uVar3;
      }
      *param_2 = local_1570[(ulong)uVar1 * 0x44];
    }
  }
  return;
}


