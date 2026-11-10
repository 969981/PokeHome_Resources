/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055516C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065516c; name: FUN_.text__0065516c
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0065516c(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = 1;
  memset((long *)(lVar3 + 0x1f0),0,0x470); // [自动静态注释] 内存复制、清零或移动
  *(undefined8 *)(lVar3 + 0x650) = param_2;
  *(undefined4 *)(lVar3 + 0x658) = param_3;
  lVar2 = FUN__text__0066bcc8(0,0x711233); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar3 + 0x1f0) = lVar2;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    if (param_1[0x86] != 2) { // [自动静态注释] 条件判断/分支
      iVar1 = FUN__text__00655288(lVar3,lVar3 + 0x1f8,1,param_2,*(undefined8 *)(lVar3 + 0xe58), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined8 *)(lVar3 + 0xd8),lVar2);
      if (iVar1 != 0) goto LAB__text__0065522c; // [自动静态注释] 条件判断/分支
      *(int *)(lVar3 + 0x648) = *(int *)(lVar3 + 0x648) + 1;
      if (param_1[0x86] == 1) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = *(long *)(lVar3 + 0x1f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar1 = FUN__text__00655288(lVar3,lVar3 + 0x420,0x1c,param_2,*(undefined8 *)(lVar3 + 0xe58), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined8 *)(lVar3 + 0xd8),lVar2);
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      *(int *)(lVar3 + 0x648) = *(int *)(lVar3 + 0x648) + 1;
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0065522c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0066bd88(*(undefined8 *)(lVar3 + 0x1f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar3 + 0x1f0) = 0;
  FUN__text__0064ef58(*(undefined8 *)(lVar3 + 0x1f8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar3 + 0x1f8) = 0;
  FUN__text__0064ef58(*(undefined8 *)(lVar3 + 0x420)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar3 + 0x420) = 0;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


