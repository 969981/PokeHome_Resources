/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0017FDC4
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027fdc4; name: FUN_.text__0027fdc4
 */


byte FUN__text__0027fdc4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0xe38) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__003d01d0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003d56f4(*(undefined8 *)(param_1 + 0xe08)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003d56f4(*(undefined8 *)(param_1 + 0xe10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003d56f4(*(undefined8 *)(param_1 + 0xe18)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003d56f4(*(undefined8 *)(param_1 + 0xe20)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003d0e20(*(undefined8 *)(param_1 + 0xe28)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003d0e20(*(undefined8 *)(param_1 + 0xe30)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0xe38) = 0;
    lVar9 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    memset((void *)(lVar9 + 0x7a87c),0,2000); // [自动静态注释] 内存复制、清零或移动
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  bVar2 = FUN__text__003d0288(*(undefined8 *)(param_1 + 0xe00)); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar3 = FUN__text__003d5744(*(undefined8 *)(param_1 + 0xe08)); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar4 = FUN__text__003d5744(*(undefined8 *)(param_1 + 0xe10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar5 = FUN__text__003d5744(*(undefined8 *)(param_1 + 0xe18)); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar6 = FUN__text__003d5744(*(undefined8 *)(param_1 + 0xe20)); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar7 = FUN__text__003d0e70(*(undefined8 *)(param_1 + 0xe28)); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar8 = FUN__text__003d0e70(*(undefined8 *)(param_1 + 0xe30)); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar8 == 1) { // [自动静态注释] 条件判断/分支
    bVar1 = bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & iVar7 == 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


