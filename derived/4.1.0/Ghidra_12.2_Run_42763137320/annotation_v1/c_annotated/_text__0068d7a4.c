/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058D7A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d7a4; name: FUN_.text__0068d7a4
 */


void FUN__text__0068d7a4(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x10) = *param_2;
  *(int *)(param_1 + 0x18) = (int)param_2[1];
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)((long)param_2 + 0xc);
  pfVar2 = (float *)FUN__text__00691370(); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar6 = (float)*(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x20) = (int)(fVar6 * *pfVar2 + 0.5);
  iVar5 = (int)(fVar6 * pfVar2[1] + 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x1c) = iVar5;
  *(int *)(param_1 + 0x24) = (int)(fVar6 * pfVar2[2] + 0.5);
  iVar1 = *(int *)((long)param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x2c) = 0;
  uVar3 = (undefined1)*(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x2d) = uVar3;
  *(undefined1 *)(param_1 + 0x2e) = uVar3;
  *(int *)(param_1 + 0x28) = iVar1 + iVar5;
  if (*(char *)((long)param_2 + 0xe) == '\0') { // [自动静态注释] 条件判断/分支
    if (*(char *)((long)param_2 + 0xf) == '\0') { // [自动静态注释] 条件判断/分支
      uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x2f) = uVar3;
    uVar4 = (undefined4)param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0x2f) = 0;
    uVar4 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(char *)(param_1 + 0x30) = (char)param_2[3];
  FUN__text__0068d884(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


