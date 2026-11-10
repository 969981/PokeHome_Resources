/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059ACA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069aca0; name: FUN_.text__0069aca0
 */


uint FUN__text__0069aca0(long param_1,undefined8 param_2,char *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,undefined8 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__0069ce3c(param_1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar4 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (cVar2 != '\0') { // [自动静态注释] 循环/迭代
      *(char *)(lVar1 + 0x40) = cVar2;
      if (((int)lVar5 == 0x3e) || (pcVar4[1] == '\0')) { // [自动静态注释] 条件判断/分支
        puVar6 = (undefined1 *)(lVar1 + 0x41); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar4 = pcVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__0069ad2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(char *)(lVar1 + 0x41) = pcVar4[1];
      lVar5 = lVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = param_1 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar4 = param_3 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar2 = param_3[lVar5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    puVar6 = (undefined1 *)(lVar1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0069ad2c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar6 = 0;
    do { // [自动静态注释] 循环/迭代
      cVar2 = *pcVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar4 = pcVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
    *(undefined8 *)(param_1 + 200) = param_2;
    *(undefined8 *)(param_1 + 0xd0) = param_4;
    *(undefined8 *)(param_1 + 0xd8) = param_5;
    *(undefined8 *)(param_1 + 0xe0) = param_6;
  } // [自动静态注释] 作用域/控制流边界
  return uVar3 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


