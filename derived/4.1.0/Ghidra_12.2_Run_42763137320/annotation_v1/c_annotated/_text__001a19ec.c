/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000A19EC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a19ec; name: FUN_.text__001a19ec
 */


void FUN__text__001a19ec(long param_1,int param_2,undefined4 param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5,undefined1 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(int *)(param_1 + 0x200) = param_2;
  *(undefined4 *)(param_1 + 0x208) = param_3;
  uVar4 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x21c) = param_5;
  lVar2 = param_1 + (long)param_2 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x220) = param_6;
  *(undefined8 *)(param_1 + 0x20c) = uVar4;
  lVar1 = param_1 + (long)param_2 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x214) = uVar5;
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(lVar1 + 0x1bc);
  iVar7 = *(int *)(lVar1 + 0x1bc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar7 == 3) { // [自动静态注释] 条件判断/分支
    uStack_40 = *(undefined8 *)(*(long *)(lVar2 + 0x68) + 0x5a60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = *(undefined4 *)(*(long *)(lVar2 + 0x68) + 0x5a68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = FUN__text__00191358(&uStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + (long)param_2 * 4 + 0x228) = uVar6;
    iVar7 = *(int *)(lVar1 + 0x1bc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = (undefined8 *)(lVar2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar7 != 4) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)(lVar2 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x1f8) = *puVar3;
  FUN__text__001ca8a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x1f0) = 1;
  FUN__text__001ad460(*(undefined8 *)(param_1 + 0x48)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


