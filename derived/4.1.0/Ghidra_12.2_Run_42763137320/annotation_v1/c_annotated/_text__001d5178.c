/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D5178
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d5178; name: FUN_.text__001d5178
 */


void FUN__text__001d5178(undefined8 *param_1,undefined4 param_2,long param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = *(undefined8 *)(param_3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = *(undefined8 *)(param_3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__00195844(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = *(int *)(lVar3 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00191358((ulong)&local_50 | 4); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = *(long *)(param_3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__005f3104(lVar3,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(char *)(param_3 + 0x28) = (char)param_2;
    if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
      uVar4 = FUN__text__005f3244(*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00320b30(uVar4,param_2,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


