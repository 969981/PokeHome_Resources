/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003200a0; name: FUN_.text__003200a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003200a0(void)

{
  ulong uVar1;
  long in_x3;
  long *plVar2;
  PlayReport aPStack_80 [64];
  
  plVar2 = *(long **)(*_DAT_0089f3d8 + 0x2a8);
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x4000,8);
  nn::prepo::PlayReport::PlayReport(aPStack_80,(char *)0x71512e);
  nn::prepo::PlayReport::SetBuffer(aPStack_80,uVar1);
  nn::prepo::PlayReport::Add((char *)aPStack_80,(char *)0x7146e3);
  nn::prepo::PlayReport::Add((char *)aPStack_80,0x717e58);
  nn::prepo::PlayReport::Add((char *)aPStack_80,0x71f4c8);
  if (in_x3 != 0) {
    nn::prepo::PlayReport::Add((char *)aPStack_80,(char *)0x720f4f);
  }
  if (DAT_00a78d0a != '\0') {
    nn::prepo::PlayReport::Add((char *)aPStack_80,(char *)0x70c5a2);
  }
  FUN__text__0011b95c(DAT_008e15f0);
  nn::prepo::PlayReport::Save((Uid *)aPStack_80);
  nn::prepo::PlayReport::Clear();
  if (uVar1 != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,0x4000,8);
  }
  return;
}


