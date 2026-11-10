/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00208F30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308f30; name: FUN_.text__00308f30
 */


undefined8 FUN__text__00308f30(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_90 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x200) != 0) { // [自动静态注释] 条件判断/分支
    if ((*(byte *)(*(long *)(param_1 + 0x200) + 0x259) & 1) == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x200)); // [自动静态注释] 调用尚未恢复正式名称的函数
      bVar1 = *(byte *)(*(long *)(param_1 + 0x200) + 0x259); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while ((bVar1 & 1) == 0) { // [自动静态注释] 循环/迭代
        nn::os::SleepThread(1000000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        bVar1 = *(byte *)(*(long *)(param_1 + 0x200) + 0x259); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0x200) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x200) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00308cf8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::LockMutex((MutexType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x180) = *param_2;
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  *(undefined8 *)(param_1 + 400) = uVar4;
  std::string::operator=((string *)(param_1 + 0x198),(string *)(param_2 + 3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_b0 = FUN__text__00309e74; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = FUN__text__00309fd4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = &LAB__text__00309fd8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = &LAB__text__00309fe4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  alStack_90[0] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00309060(param_1,param_2,&local_b0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar3 = local_a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_a8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_a0 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_98 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b0 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_a8 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar3)(alStack_90); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


