/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9fd0; name: FUN_.text__005d9fd0
 */


void FUN__text__005d9fd0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_68;
  long local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_24;
  
  iVar2 = nn::aoc::CountAddOnContent();
  uVar6 = (ulong)((float)(ulong)(long)iVar2 / *(float *)(param_1 + 0x118));
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    uVar6 = std::__next_prime(uVar6);
  }
  uVar7 = *(ulong *)(param_1 + 0xd0);
  if (uVar6 <= uVar7) {
    if (uVar7 <= uVar6) goto LAB__text__005da0e4;
    uVar3 = (ulong)((float)*(ulong *)(param_1 + 0x110) / *(float *)(param_1 + 0x118));
    if ((uVar7 < 3) ||
       (uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555),
       uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333),
       1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar3 = std::__next_prime(uVar3);
      if (uVar6 <= uVar3) {
        uVar6 = uVar3;
      }
    }
    else {
      if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar3) {
        uVar6 = uVar3;
      }
    }
    if (uVar7 <= uVar6) goto LAB__text__005da0e4;
  }
  FUN__text__005db620(param_1 + 200,uVar6);
LAB__text__005da0e4:
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      local_24 = 0;
      nn::aoc::ListAddOnContent(&local_24,iVar5,1);
      local_68 = 0;
      local_50 = 0;
      local_48 = 0;
      local_60 = 0;
      local_58 = (long *)0x0;
      FUN__text__005db8d0(param_1 + 200,&local_24,&local_24,&local_68);
      lVar1 = local_60;
      local_60 = 0;
      if (lVar1 != 0) {
        (**(code **)(*local_58 + 0x18))(local_58,lVar1,local_50,local_48);
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return;
}


