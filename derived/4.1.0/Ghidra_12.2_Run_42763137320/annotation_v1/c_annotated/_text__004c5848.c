/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C5848
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5848; name: FUN_.text__004c5848
 */


void FUN__text__004c5848(undefined8 *param_1,undefined4 param_2,undefined4 param_3,char *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5,uint param_6,uint param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(ushort *)((long)param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((uVar2 & 0x7c) == 4) && (param_1[2] != 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = *(ushort *)((long)param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0xc) = uVar2 & 0xf800;
  *(undefined4 *)(param_1 + 3) = param_3;
  if (param_4 != (char *)0x0) { // [自动静态注释] 条件判断/分支
    __n = strlen(param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __dest = (char *)FUN__text__00400f80(0,__n + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[2] = __dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (__dest != (char *)0x0) { // [自动静态注释] 条件判断/分支
      sVar1 = strlen(param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (sVar1 + 1 <= __n) { // [自动静态注释] 条件判断/分支
        __n = sVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      strncpy(__dest,param_4,__n); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      __dest[__n] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_7 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)param_1 = param_2;
  uVar3 = 0x280; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_6 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(ushort *)((long)param_1 + 0xc) = *(ushort *)((long)param_1 + 0xc) & 0xf800 | uVar3 | uVar2 | 4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


