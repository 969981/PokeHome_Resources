/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00502C60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602c60; name: FUN_.text__00602c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00602c60(uint param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_a08; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uStack_a04; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_a00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9fc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_9f8 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9f4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_9f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  random_device rStack_31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uStack_9f4._1_1_ = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  stack0xfffffffffffff609 = 0x6d6f646e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a00 = CONCAT31((int3)_DAT_0071bb95,0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_9fc = (undefined4)((ulong)_DAT_0071bb95 >> 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auStack_9f8[0] = (undefined1)((ulong)_DAT_0071bb95 >> 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  std::random_device::random_device(&rStack_31,(string *)&local_a00); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((local_a00 & 1) != 0) { // [自动静态注释] 条件判断/分支
    operator_delete(local_9f0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_a00 = std::random_device::operator()(&rStack_31); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = -0x26e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = (ulong)((local_a00 ^ local_a00 >> 0x1e) * 0x6c078965) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_9fc = (undefined4)lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar5 = (int *)auStack_9f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    iVar1 = iVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = iVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = ((uint)lVar8 ^ (uint)lVar8 >> 0x1e) * 0x6c078965; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = (int)lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar3 + iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = lVar7 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *piVar5 = iVar6 + iVar3 + 0x270;
    lVar8 = lVar7 + (ulong)((uVar2 ^ uVar2 >> 0x1e) * 0x6c078965) + 0x26f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar5[1] = (int)lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar5 = piVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar7 != 0); // [自动静态注释] 循环/迭代
  uStack_a04 = param_1 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a08 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = std::uniform_int_distribution<int>::operator() // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    ((uniform_int_distribution<int> *)&local_a08, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     (mersenne_twister_engine *)&local_a00,(param_type *)&local_a08); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  std::random_device::~random_device(&rStack_31); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return iVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


