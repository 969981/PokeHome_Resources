/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058DC68
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068dc68; name: FUN_.text__0068dc68
 */


undefined4 FUN__text__0068dc68(long param_1,undefined8 *param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = 0x2d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x30) == '\0' || param_3 != 0x2011) { // [自动静态注释] 条件判断/分支
    iVar1 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),iVar1,*(undefined4 *)(param_1 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined2 *)(param_1 + 0x32));
  if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0x38) & 0x42) != 0)) || // [自动静态注释] 条件判断/分支
     (((*(byte *)(lVar5 + 0x38) & 0x35) == 0 && (*(int *)(lVar5 + 0x3c) == 0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = FUN__text__00691184(*(undefined8 *)(param_1 + 0x10),iVar1, // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined2 *)(param_1 + 0x32));
    uVar7 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar6 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar7 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x2f) != '\x02')) { // [自动静态注释] 条件判断/分支
      uVar4 = FUN__text__0069142c(*(undefined8 *)(param_1 + 0x10),iVar1, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
      lVar5 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),0x20, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
      if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
        lVar5 = FUN__text__006911b0(*(undefined8 *)(param_1 + 0x10),0x20, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined4 *)(param_1 + 0x18));
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__0068dd7c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = *(undefined4 *)(param_1 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),uVar2, // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
    if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
      lVar5 = FUN__text__006911b0(*(undefined8 *)(param_1 + 0x10),uVar2, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)(param_1 + 0x18));
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(undefined2 *)(lVar5 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0068dd7c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar5 + 0x4e);
  uVar3 = *(undefined2 *)(lVar5 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)((long)param_2 + 0xc) = uVar4;
  *(undefined2 *)((long)param_2 + 10) = uVar3;
  *(undefined2 *)((long)param_2 + 0xe) = *(undefined2 *)(lVar5 + 0x44);
  *(short *)(param_2 + 2) = *(short *)(lVar5 + 0x4a) + 1;
  *(short *)((long)param_2 + 0x12) = *(short *)(lVar5 + 0x46) + 1;
  *(short *)(param_2 + 3) = *(short *)(lVar5 + 0x40) + 1;
  *(undefined2 *)((long)param_2 + 0x1a) = *(undefined2 *)(lVar5 + 0x42);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)((long)param_2 + 0x2a) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *param_2 = uVar8;
  *(undefined2 *)((long)param_2 + 0x1c) = 8;
  *(short *)((long)param_2 + 0x14) = (short)*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28);
  *(short *)((long)param_2 + 0x16) = (short)*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x2c);
  param_2[4] = *(long *)(param_1 + 0x10) + 0x1ea8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)((long)param_2 + 0x2c) = *(short *)(lVar5 + 0x50) - *(short *)(param_1 + 0x24);
  *(byte *)(lVar5 + 0x38) = *(byte *)(lVar5 + 0x38) | 4;
  return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


