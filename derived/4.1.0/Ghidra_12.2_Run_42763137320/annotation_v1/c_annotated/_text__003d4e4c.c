/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D4E4C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d4e4c; name: FUN_.text__003d4e4c
 */


void FUN__text__003d4e4c(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(lVar2 + 0x28) == '\0') { // [自动静态注释] 条件判断/分支
    lVar1 = *(long *)(lVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ebf00(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_58 = (ulong)CONCAT24(*(undefined2 *)(lVar2 + 0x22),(uint)*(ushort *)(lVar2 + 0x20)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_68 = CONCAT44((int)*(float *)(lVar2 + 0x18),(undefined4)uStack_68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = CONCAT44(local_60._4_4_,(int)*(float *)(lVar2 + 0x1c)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = (ulong)CONCAT24(*(undefined2 *)(lVar2 + 0x24),(undefined4)uStack_48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006eddd4(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,0x123); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006eddfc(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,0x123); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ed4ac(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined8 *)(lVar2 + 8),lVar1 + 0x58,&local_70);
    FUN__text__006eddd4(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,0x123); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006eddfc(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,0x123); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(lVar2 + 0x28) = 1;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


