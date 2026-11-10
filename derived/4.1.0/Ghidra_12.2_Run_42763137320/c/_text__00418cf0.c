/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00418cf0; name: FUN_.text__00418cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00418cf0(undefined8 param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 *local_50 [2];
  undefined8 *local_40 [2];
  
  lVar5 = DAT_00ae9a88;
  bVar2 = DAT_00ae99e0 != 2;
  bVar3 = DAT_008ab01c != '\0';
  if (*(int *)(DAT_00ae9a88 + 8) != 0) {
    uVar4 = nn::os::GetSystemTick();
    *(undefined8 *)(lVar5 + 0x40) = uVar4;
  }
  FUN__text__00473680(_DAT_008ab03c);
  FUN__text__00417660();
  FUN__text__00472950();
  for (lVar5 = DAT_00ae99f8; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
    FUN__text__00408588(lVar5);
  }
  FUN__text__00418e30(local_40,bVar2 || bVar3);
  if (bVar2 || bVar3) {
    FUN__text__00413dc8(local_50,local_40);
    FUN__text__00419040(auStack_60,local_50);
  }
  else {
    FUN__text__00413dc8(auStack_60,local_40);
  }
  local_50[0] = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(local_40,local_50,0x10,8,0x717ffa,0,1);
  puVar1 = local_50[0];
  if (local_40[0] != (undefined8 *)0x0) {
    *local_40[0] = 0x887508;
  }
  local_50[0] = (undefined8 *)0xffffffffffffffff;
  local_40[0] = puVar1;
  FUN__text__00413d68(param_1,local_40,1,local_58);
  return;
}


