/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005CDDD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cddd0; name: FUN_.text__006cddd0
 */


void FUN__text__006cddd0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 0x40) = param_2;
  local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(param_2 + 0x38),0x52475456,1,&local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(int *)(param_1 + 0x58) = iVar1;
  if (-1 < iVar1) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__006b13a0(*(undefined8 *)(param_1 + 0x40),iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006f3f40(uVar5,0,3,0x71b339); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    uVar5 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006f3f40(uVar5,4,3,0x70b4fe); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    iVar1 = *(int *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar4 = *(int *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  } // [自动静态注释] 作用域/控制流边界
  local_24 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1, // [自动静态注释] 调用尚未恢复正式名称的函数
                              &local_24); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)(param_1 + 0x70) = iVar1;
  if (-1 < iVar1) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__006b13a0(*(undefined8 *)(param_1 + 0x40),iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006f3f40(uVar5,0,3,0x71b339); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar5 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x70)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006f3f40(uVar5,4,3,0x70b4fe); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    iVar1 = *(int *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar4 = *(int *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  } // [自动静态注释] 作用域/控制流边界
  local_24 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1, // [自动静态注释] 调用尚未恢复正式名称的函数
                              &local_24); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)(param_1 + 0x88) = iVar1;
  if (-1 < iVar1) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__006b13a0(*(undefined8 *)(param_1 + 0x40),iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006f3f40(uVar5,0,3,0x71b339); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    uVar5 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006f3f40(uVar5,4,3,0x70b4fe); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    iVar1 = *(int *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar4 = *(int *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  } // [自动静态注释] 作用域/控制流边界
  local_24 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__006c0d80(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1, // [自动静态注释] 调用尚未恢复正式名称的函数
                              &local_24); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)(param_1 + 0xa0) = iVar1;
  if (-1 < iVar1) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__006b13a0(*(undefined8 *)(param_1 + 0x40),iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006f3f40(uVar5,0,3,0x71b339); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
    uVar5 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0xa0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__006f3f40(uVar5,4,3,0x70b4fe); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    iVar1 = *(int *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar4 = *(int *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = FUN__text__006b1998(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


