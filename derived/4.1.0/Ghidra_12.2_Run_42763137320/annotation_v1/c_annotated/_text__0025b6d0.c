/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0015B6D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025b6d0; name: FUN_.text__0025b6d0
 */


void FUN__text__0025b6d0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 0x678); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar5 = (char *)(param_1 + 0x6b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (pcVar5[-0x30] == '\0') { // [自动静态注释] 条件判断/分支
      bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar1 = *pcVar5 != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(lVar4 + 0x2d0),lVar3 + 0x72c710); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1;
    if (pcVar5[-0x30] == '\0') { // [自动静态注释] 条件判断/分支
      bVar1 = *pcVar5 != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar3 + 0x72c890); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1;
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar3 + 0x72ca10); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = lVar3 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar5 = pcVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1;
  } while (lVar3 != 0x180); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


