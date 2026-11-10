/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038DAB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048dab0; name: FUN_.text__0048dab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0048dab0(long *param_1,uint param_2,undefined8 *param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar5 = _DAT_00000050; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = param_2 / uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8); // [自动静态注释] 循环/迭代
        (lVar4 != 0 && (*(uint *)(lVar4 + 0x4c) != param_2)); lVar4 = *(long *)(lVar4 + 0x68)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    pcVar5 = *(code **)(lVar4 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((pcVar5 == (code *)0x0) || ((*(byte *)(lVar4 + 0x61) >> 5 & 1) == 0)) { // [自动静态注释] 条件判断/分支
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_88 = *(undefined8 *)(lVar4 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_80 = *(undefined8 *)(lVar4 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_64 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5c = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_74 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_6c = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_54 = *(undefined4 *)(param_3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_50 = 0x2000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = nn::os::GetCurrentThread(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::ClearEvent((EventType *)(param_1 + 7)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*pcVar5)(0x2000,&local_88); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::SignalEvent((EventType *)(param_1 + 7)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


