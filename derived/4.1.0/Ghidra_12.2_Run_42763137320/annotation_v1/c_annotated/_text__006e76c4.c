/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E76C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e76c4; name: FUN_.text__006e76c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__006e76c4(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(*(long *)(lVar6 + 0xa0) + 0x752) == '\0') { // [自动静态注释] 条件判断/分支
    lVar7 = *(long *)(*(long *)(lVar6 + 0x238) + 0x338); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)(**(code **)(*(long *)(lVar6 + 0x828) + 0x10))(lVar6 + 0x828,0x2c,0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar4 = 0;
      puVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(*param_1 + 0x418) = puVar4;
      *(undefined4 *)puVar4 = *(undefined4 *)(lVar7 + 0x18);
      *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(lVar7 + 0x1c);
      uVar1 = *(uint *)(*param_1 + 0xac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 2) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x14) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 3) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x1c) = (float)uVar1 * 2.3283064e-10;
      FUN__text__006d7b48(*param_1,4,0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = (*(int *)(lVar6 + 0x230) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(int *)(*(long *)(*(long *)(lVar6 + 0x238) + 0x338) + 0x10) * *(int *)(lVar6 + 0x230)
              ) * 0xa0 + 0xa0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar7 = *(long *)(lVar6 + 0x418); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = FUN__text__006d7b8c(lVar6,*(undefined4 *)(*_DAT_008a6bd0 + 0x20),(long)iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar5 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(lVar7 + 0x20) = 1;
        return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


