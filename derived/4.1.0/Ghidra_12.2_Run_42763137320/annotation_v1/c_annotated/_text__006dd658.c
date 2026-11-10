/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005DD658
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dd658; name: FUN_.text__006dd658
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__006dd658(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_5 + 0x28) != 0) { // [自动静态注释] 条件判断/分支
    iVar1 = *(int *)(param_4 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_4 + 0x124) != -1) { // [自动静态注释] 条件判断/分支
      FUN__text__006ee1d4(param_2,*(int *)(param_4 + 0x124),0,*(long *)(param_5 + 0x28),0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (iVar1 != -1) { // [自动静态注释] 条件判断/分支
      FUN__text__006ee1d4(param_2,iVar1,4,*(undefined8 *)(param_5 + 0x28),0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_3 + 0x6d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = *(undefined8 *)(lVar2 + 0x198); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(param_4 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = (*(long *)(param_3 + (ulong)*(uint *)(param_3 + 0x30) * 8 + 0x6c0) - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             *(long *)(lVar2 + 0x1a8)) + *(long *)(lVar2 + 400);
  if (*(int *)(param_4 + 0x134) != -1) { // [自动静态注释] 条件判断/分支
    FUN__text__006ee1d4(param_2,*(int *)(param_4 + 0x134),0,&local_50,0xc0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 != -1) { // [自动静态注释] 条件判断/分支
    FUN__text__006ee1d4(param_2,iVar1,4,&local_50,0xc0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(*(long *)(param_3 + 0x238) + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(param_4 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = *(undefined8 *)(lVar2 + 0x198); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *(long *)(lVar2 + 400) + *(long *)(*(long *)(param_3 + 0x238) + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_4 + 300) != -1) { // [自动静态注释] 条件判断/分支
    FUN__text__006ee1d4(param_2,*(int *)(param_4 + 300),0,&local_50,0x750); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 != -1) { // [自动静态注释] 条件判断/分支
    FUN__text__006ee1d4(param_2,iVar1,4,&local_50,0x750); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


