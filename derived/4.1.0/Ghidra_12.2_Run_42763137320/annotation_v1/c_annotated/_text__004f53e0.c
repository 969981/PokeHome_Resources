/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F53E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f53e0; name: FUN_.text__004f53e0
 */


int FUN__text__004f53e0(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_170 [264]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004f6114(auStack_170,param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  while (local_68 != param_2) { // [自动静态注释] 循环/迭代
    (**(code **)(*param_1 + 0xb8))(param_1,auStack_170,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(param_1[0xc] + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar3 = param_1[0xd] + lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1 = (long *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (param_1 != (long *)0x0); // [自动静态注释] 循环/迭代
  if (*(long *)(param_2 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
    iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = FUN__text__004f6970(auStack_170,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(lStack_60 + 0x88) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            (((int)uVar2 - ((int)lVar3 + iVar1)) - *(int *)(local_68 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004f6174(auStack_170); // [自动静态注释] 调用尚未恢复正式名称的函数
  return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


