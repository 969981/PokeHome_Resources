/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0032d760; name: FUN_.text__0032d760
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0032d760(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = -72000;
  nn::account::AsyncContext::~AsyncContext((AsyncContext *)(param_1 + 0x72828a));
  lVar2 = 0x3115760;
  lVar3 = -72000;
  *param_1 = _DAT_008a1888 + 0x10;
  do {
    if (*(long *)((long)param_1 + lVar2) != 0) {
      (**(code **)(*(long *)(*(long *)((long)param_1 + lVar2) + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar2) = 0;
    }
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + -8;
  } while (lVar3 != 0);
  lVar3 = 0x3103e20;
  do {
    if (*(long *)((long)param_1 + lVar3) != 0) {
      (**(code **)(*(long *)(*(long *)((long)param_1 + lVar3) + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar3) = 0;
    }
    lVar1 = lVar1 + 8;
    lVar3 = lVar3 + -8;
  } while (lVar1 != 0);
  FUN__text__0064b4e8(param_1 + 0x5fe484);
  *param_1 = 0x8713e8;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


