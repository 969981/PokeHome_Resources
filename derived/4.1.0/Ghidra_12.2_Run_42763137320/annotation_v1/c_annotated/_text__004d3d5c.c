/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D3D5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d3d5c; name: FUN_.text__004d3d5c
 */


void FUN__text__004d3d5c(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = *param_2;
  *(int *)(param_1 + 2) = (int)lVar2;
  *(int *)(param_1 + 1) = (int)lVar1;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  lVar2 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(lVar2 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar2 + 0x68) = 0;
      (**(code **)(**(long **)(lVar2 + 0x58) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined4 *)(lVar2 + 0x6c) = 0;
    } // [自动静态注释] 作用域/控制流边界
    if ((*(long *)(lVar2 + 0x80) != 0) && (*(char *)(lVar2 + 0x88) != '\0')) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar2 + 0x78) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined1 *)(lVar2 + 0x88) = 0;
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar2 + 0x80) = 0;
    FUN__text__00400fc0(0,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  param_1[3] = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004d7c0c(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00400fc0(0xe,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(char *)(param_1 + 4) = (char)param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  param_1[5] = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


